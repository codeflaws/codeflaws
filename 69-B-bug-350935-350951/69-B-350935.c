#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
  int a[110]={0},b[110],i,j,n,m,l,r,t,c;
  scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)b[i]=1<<21;
  for(i=0;i<m;i++){
    scanf("%d%d%d%d",&l,&r,&t,&c);
    for(j=l;j<=r;j++){
      if(b[j]==t&&a[j]<c)a[j]=c;
      if(b[j]>t)b[j]=t,a[j]=c;
    }
  }
  for(c=0,i=1;i<=n;i++)c+=a[i];
  printf("%d\n",c);
  return 0;
}
