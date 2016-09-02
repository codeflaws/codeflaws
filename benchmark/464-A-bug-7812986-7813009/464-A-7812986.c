#include <stdio.h>
#include <string.h>

int n,p,i,j,flag;
char s[1005];

int main(int argc, char *argv[]) 
{
	
	scanf("%d %d %s",&n,&p,s);
	
	for(i=n-1;i>=0;i--)     
	{
		while((int)s[i]-96<p)
	{
		if((int)s[i]+1!=(int)s[i-1] && (int)s[i]+1!=(int)s[i-2])
		{
			s[i]=s[i]+1;
			flag=1;
			j=i;
			break;
		}
	}
		if(flag)
		break;
	}
	if(!flag)
	printf("NO\n");
	else{
		for(i=j+1;i<n;i++)
		{
			if(s[i-1]!='a' && s[i-2]!='a')
			s[i]='a';
			else
			if(s[i-1]!='b' && s[i-2]!='b')
			s[i]='b';
			else
			if(s[i-1]!='c' && s[i-2]!='c')
			s[i]='c';
			
		}
		printf("%s\n",s);
	}
	
	return 0;
}