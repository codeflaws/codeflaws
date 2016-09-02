#include<stdio.h>
int main(int argc, char *argv[])
{
         int i,n,m,x,y;
         scanf("%d",&n);
         int a[n];
         for(i=0;i<n;i++)
         scanf("%d",&a[i]);
         scanf("%d",&m);
         for(i=0;i<m;i++)
         {      scanf("%d%d",&x,&y);
                if(x-2>=0) a[x-2]=a[x-2]+y-1;
                if(x<=5) a[x]=a[x]+(a[x-1]-y);
                a[x-1]=0;
         }
         for(i=0;i<n;i++) printf("%d\n",a[i]);
         return 0;
}
