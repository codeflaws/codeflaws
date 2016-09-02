#include <stdio.h>
#include <string.h>
#define maxn 100000+10
typedef struct{
  int x,y,z;
}inf;
inf line[maxn];
char s[maxn];
int main(int argc, char *argv[])
{
   int i,len,m,l,r,x,y,z;
   while(~scanf("%s",s))
   {
	  len=strlen(s);
      for(i=0;i<=len;i++) line[i].x=line[i].y=line[i].z=0;
	  for(i=1;i<=len;i++)
	  if(s[i-1]=='x') {line[i].x=line[i-1].x+1;line[i].y=line[i-1].y;line[i].z=line[i-1].z;}
	  else if(s[i-1]=='y') {line[i].y=line[i-1].y+1;line[i].x=line[i-1].x;line[i].z=line[i-1].z;}
	  else if(s[i-1]=='z') {line[i].z=line[i-1].z+1;line[i].x=line[i-1].x;line[i].y=line[i-1].y;}
	  scanf("%d",&m);
	  for(i=1;i<=m;i++) 
	  {
		  scanf("%d%d",&l,&r);
		  if(r-l+1>=3) {printf("YES\n");continue;}
          x=line[r].x-line[l-1].x;
		  y=line[r].y-line[l-1].y;
		  z=line[r].z-line[l-1].z;
		  if((x==y&&y==z)||(x==y&&x==z+1)||(x==z&&x==y+1)||(y==z&&y==x+1)||(x==y&&x==z-1)||(x==z&&x==y-1)||(y==z&&y==x-1))
            printf("YES\n");
		  else printf("NO\n");
	  } 
   }
return 0;
} 
