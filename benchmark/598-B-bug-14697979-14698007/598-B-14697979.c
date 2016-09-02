#include <stdio.h>
int main(int argc, char *argv[])
{
	char s[100005],var,ch[100005];
	int t,l,r,k,i,count=0,c=0;
	scanf("%s",s);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&l,&r,&k);
		l--;
		r--;
		count=0;
		int p=0;
		if(k>(r-l+1))
			k=k%(r-l+1);
		i=r-k+1;
		while(i<=r)
		{
			ch[count++]=s[i++];
		}
		ch[count]='\0';
		c=(r-k);
		count--;
		for(i=r;i>=l;i--)
		{
			if(i>=(l+k))
			{
			//	printf("%c ",s[c]);
				s[i]=s[c--];
			}else
				s[i]=ch[count--];
				//	printf("ch:%s s:%s\n",ch,s);
		}
	printf("ch:%s s:%s\n",ch,s);
		/*while(k--)
		{	var=s[r];
			for(i=r;i>l;i--)
				s[i]=s[i-1];
			s[l]=var;
		}*/
	}
	printf("%s\n",s);
	return 0;
}
