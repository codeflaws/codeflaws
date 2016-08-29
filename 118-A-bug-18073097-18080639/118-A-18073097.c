#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	int i,k,cnt=0;
	 char s[101],m[202];
	scanf("%s",&s);
	for(i=0,k=0;s[i]!='\0';i++,k++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			k=k-1;
			continue;
		}
		else if(s[i]>=97&&s[i]<=122)
		{
		m[(2*k)+1]=s[i];
	    m[2*k]='.';
	    cnt=cnt+2;
	}
		else{
		m[2*k]='.';
		m[(2*k)+1]=s[i]+32;
		cnt=cnt+2;
	}
	}
	for(i=0;i<cnt;i++)
	printf("%c",m[i]);
		return 0;
}
