#include <string.h>
#include <stdio.h>
int fw,fh,*map;
char lowest(int xo, int yo)
{
	int i=xo+fw*yo,c=map[i];
	if(c==0)
		for(c=65;c==map[i-1]||c==map[i+1]||c==map[i-fw]||c==map[i+fw];c++);
	return c;
}
int main(int argc, char *argv[])
{
	scanf("%d %d", &fh, &fw);
	fw+=2;fh+=2;
	int x,y,xx,yy,s,c,mmap[fw*fh];
	memset(map=mmap, 0, sizeof(mmap));
	for(y=1;y<fh-1;y++)
	{
		for(x=1;x<fw-1;x++)
		{
			c=lowest(x,y);
			printf("%c",(char)c);
			if(map[x+fw*y]!=0) continue;
			for(s=1;y+s<fh-1&&x+s<fw-1&&lowest(x+s,y)==c;s++);
			for(xx=0;xx<s;xx++)
				for(yy=0;yy<s;yy++)
					map[x+xx+fw*(y+yy)]=c;
		}
		puts("");
	}
    return 0;
}
