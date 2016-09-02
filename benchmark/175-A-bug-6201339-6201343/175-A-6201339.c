#include <stdio.h>
#include <stdlib.h>

int GetSize(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++);
     return i;
}
void CopyArr(char a[],char b[],int l,int r)
{
    int i,j;
    for(i=l,j=0;i<=r;i++,j++)
{
    a[j]=b[i];
}
}
 long long int Max(long long int f,long long int s)
{
    if(f>s)
    return f;
    else
    return s;
}
 long long int GetVal(char *s,int l,int r)
{
int n;
long long int v;
char x[30]="";
CopyArr(x,s,l,r);
n=GetSize(x);
 v=atoll(x);
 printf("%lld \n",v);
 if(v>1000000)
 return -1;
else if(x[0]=='0'&&n>1)
 return -1;
else
 return v;
}
int main(int argc, char *argv[])
{
    int i,j,n;
    long long int l,m,r,max=-1;
    char s[31]="";
   scanf("%s",s);
   n=GetSize(s);
   for(i=0;i<n-2;i++)
   {
       for(j=i+1;j<=n-2;j++)
       {
           l=GetVal(s,0,i);
           m=GetVal(s,i+1,j);
           r=GetVal(s,j+1,n-1);
           if(l==-1||m==-1||r==-1)
               continue;
           else
           max=Max(max,l+m+r);
       }
   }
   printf("%ld",max);


    return 0;
}
