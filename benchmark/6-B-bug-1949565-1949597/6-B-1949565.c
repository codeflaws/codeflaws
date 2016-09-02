#include<stdio.h>
int main(int argc, char *argv[])
{
char c[200][200],s;
int n,m,b[256]={0},co=0,j,i;
scanf("%d%d",&n,&m);getchar();s=getchar();getchar();
for(i=0;i<n;i++)
    {   
        for(j=0;j<m;j++)
        c[i][j]=getchar();
        getchar();
    }
for(i=0;i<n;i++)
    for(j=0;j<m;j++)
            if(c[i][j]==s)
            {
                if(i>0)b[c[i-1][j]]=1;
                if(i<n-1)b[c[i+1][j]]=1;
                if(j>0)b[c[i][j-1]]=1;
                if(j<n-1)b[c[i][j+1]]=1;
            }
for(i=65;i<91;i++)co+=b[i];
printf("%d",co-b[s]);
return 0;
}