#include <stdio.h>
#include <string.h>
int call(char,int*,int*);
int a[501][501];
int x,y;
int main(int argc, char *argv[])
{
    int i,j,v,n,ans[100005],t=1,s=0,x0,y0;
    char name[100005];
    scanf("%d%d%d%d",&x,&y,&x0,&y0);
    scanf("%s",name);
    n=strlen(name);
    ans[0]=1;
    for(i=1;i<=500;i++)
    for(j=1;j<=500;j++)
     a[i][j]=0;
    a[x0][y0]=1; 
    for(i=0;i<=n-2;i++)
    {
        v=call(name[i],&x0,&y0);
        if(v==1)
          ans[t]=1;
        else
          ans[t]=0;
        t++;  
    }
    v=call(name[n-1],&x0,&y0);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            if(a[i][j]==0)
              s++;
        }
    }
    if(v==1)
      s=s+v;
    ans[t]=s;
    for(i=0;i<=t;i++)
      printf("%d ",ans[i]);
    return 0;  
}
int call(char c,int *x0,int *y0)
{
    int x1,y1;
    x1=(*x0);y1=(*y0);
    if(c=='U')
     (*x0)--;
    if(c=='D')
     (*x0)++;
    if(c=='R')
      (*y0)++;
    if(c=='L')
      (*y0)--;
    if((*x0)<=x&&(*y0)<=y&&(*x0)>=1&&(*y0)>=1&&a[(*x0)][(*y0)]==0)
    {
        a[(*x0)][(*y0)]=1;
        return(1);
    }
    else
    {
      if((*x0)>x||(*y0)>y||(*x0)<1||(*y0)<1)
      { *x0=x1;
       *y0=y1;
      }
        return(0); 
    }
}
