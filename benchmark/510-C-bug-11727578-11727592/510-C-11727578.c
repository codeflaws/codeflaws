#include<stdio.h>
#include<string.h>
int a[27][27],flag[27],d[27],fill,flag1;
void df(int i)
{int j;
flag[i]=0;
for(j=0;j<26;j++)
{
if(i!=j&&a[i][j]>0)
{if(flag[j]==0)
{
    flag1=1;
    break;
}
else if(flag[j]==-1)
    df(j);
}
}
d[fill++]=i;
flag[i]=1;
}
int main(int argc, char *argv[])
{
int n,i,j,k,h,count[101],max;
int rep[101];
char b[101][101],ch;
scanf("%d",&n);
fill=0;
max=0;
flag1=0;
for(i=0;i<n;i++)
{
    rep[i]=0;
ch=getchar();
scanf("%s",&b[i]);
}
for(i=n-2;i>=0;i--)
{
    if(b[i][0]==b[i+1][0])
        rep[i]=1;
}
for(i=0;i<26;i++)
{flag[i]=-1;
for(j=0;j<26;j++)
    a[i][j]=0;
}
for(i=n-1;i>0;i--)
{
a[b[i][0]-'a'][b[i-1][0]-'a']=1;
}
for(i=0;i<n;i++)
    {count[i]=strlen(b[i]);
    if(count[i]>max)
        max=count[i];
        //printf("%d\n",count[i]);
    }
for(i=1;i<max;i++)
{
    for(j=n-2;j>=0;j--)
    {//printf("%d %d %d\n",i,j,rep[j]);
        if(count[j]>=i&&count[j+1]>=i)
        {if(rep[j]==1&&b[j+1][i]=='\0'&&b[j][i]!='\0')
        {flag1=1;
        break;
        }
            if(rep[j]==1&&b[j][i]!=b[j+1][i])
            {//printf("hi\n");
            a[b[j+1][i]-'a'][b[j][i]-'a']=1;
            rep[j]=0;
            }
        }
    }
}
for(i=0;i<26;i++)
{
    if(flag[i]==-1)
        df(i);
}
if(flag1==1)
    printf("Impossible\n");
else
{
for(i=0;i<26;i++)
    printf("%c",d[i]+'a');
}
return 0;
}
