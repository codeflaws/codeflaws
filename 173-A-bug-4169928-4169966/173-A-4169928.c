#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
long long int n,i=0,j=0,m,k,y,cnt1=0,cnt2=0,q=0;
scanf("%lld",&n);
char s1[1001],s2[1001];
scanf("%s",s1);
scanf("%s",s2);
m=strlen(s1);
k=strlen(s2);
for(y=0;;y++)
{if(s1[i]!=s2[j])
{if((s1[i]=='R'&&s2[j]=='S')||(s1[i]=='S'&&s2[j]=='P')||(s1[i]=='P'&&s2[j]=='R'))
cnt2++;
else
cnt1++;}
q++;
if((i==m-1&&j==k-1)||q==n)
break;
else if(i==m-1&&j!=k-1)
i=-1;
else if(j==k-1&&i!=m-1)
j=-1;
i++;
j++;}
if(n>q)
{cnt2+=(n/q-1)*cnt2;
cnt1+=(n/q-1)*cnt1;
q+=(n/q-1)*q;
i=0;
j=0;
for(y=0;;y++)
{if(s1[i]!=s2[j])
{if((s1[i]=='R'&&s2[j]=='S')||(s1[i]=='S'&&s2[j]=='P')||(s1[i]=='P'&&s2[j]=='R'))
cnt2++;
else
cnt1++;}
q++;
if(q==n)
break;
else if(i==m-1)
i=-1;
else if(j==k-1)
j=-1;
i++;
j++;}
}
printf("%lld %lld",cnt1,cnt2);
return(0);}
