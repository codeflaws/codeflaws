#include<stdio.h>
int main(int argc, char *argv[])
{
     int n,i,p[200]={0};
        scanf("%d",&n);
           for(i=1;i<=n;i++)
              if(i%2)
                      p[i]=i+1;
              else
                      p[i]=i-1;
           if(n<2)
                printf("-1");
            else {
                 for(i=1;i<=n;i++)
                      printf("%d ",p[i]);
            }          
          
return 0;
}
