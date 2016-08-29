#include<stdio.h>
#include<string.h>
char s[100003];
int m[100003];
long long ans=1;
int main(int argc, char *argv[])
{
	int n=0,k=0,i,j,cnt;
	char c;
	while(c=getchar())
	{
 		if(c=='\n') break;
		s[n++]=c;
	}
	for(i=1;i<n-1;i++)
	{
		if(s[i-1]+s[i]-'0'-'0'==9 && s[i-1]==s[i+1]) 
		{
			cnt=3;
			j=i+1;
			while(s[j-1]==s[j+1]) j++;
			cnt=cnt+j-i-1;
			if(cnt%2==0) cnt=1;
			m[k++]=cnt;
			cnt=0;
			i=j;
		} 
	}
	for(i=0;i<k;i++)
	 ans*=((m[i]+1)/2);

    printf("%I64d",ans);
    return 0;
}