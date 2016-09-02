#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
int i,k=0,t=0;
 char ch[201];
int arr[200];
scanf("%s",ch);
int n=strlen(ch);
char st[200];
for(i=0;i<n;i++)
{
	if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B')
	{
	arr[t]=i;
printf("%d",arr[t]);
	t++;
	i+=2;
	}
	else{
		st[k]=ch[i];
		k++;
	    }
}
t=0;
int p=0;
for(i=0;i<n;i++)
{
if(i!=arr[t])
{
printf("%c",st[p]);
p++;
}
else{
if(i==0){
t++;
i+=2;
continue;
}
else{
printf(" ");
t++;
i+=2;
}
}
}
return 0;
}
