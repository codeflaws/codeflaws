#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{int i,j=0,n,l,t,b[26]={0},c[26]={0};char a[105]={'\0'};
scanf("%d",&n);
scanf("%s",a);
t=strlen(a);

for(i=0;i<t;i++)
{if(a[i]=='?')
{if(a[t-1-i]=='?')
j++;}
else
{
    b[a[i]-97]++;
}}
l=0;j=j/2;
for(i=0;i<n;i++)
if(b[i]==0)
c[l++]=i;j=j-l;
l=0;
if(j>=0)
for(i=0;i<(t+1)/2;i++)
{if(a[i]==a[t-1-i]&&a[i]=='?')
{if(j>0)
{
    a[i]='a';a[t-1-i]='a';j--;
}
else
{a[i]=c[l++]+97;a[t-1-i]=a[i];
}}
else if(a[i]!=a[t-i-1])
{
    if(a[i]=='?'||a[t-1-i]=='?')
    {if(a[i]=='?')
    a[i]=a[t-1-i];
    else
    {a[t-1-i]=a[i];}

    }
    else
    {V:
        printf("IMPOSSIBLE");
        goto flag;
    }
}
}else
goto V;
printf("%s",a);
flag:
return 0;
}
