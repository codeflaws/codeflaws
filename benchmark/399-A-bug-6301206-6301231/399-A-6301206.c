#include<stdio.h>
int main(int argc, char *argv[])

{
    int n,p,k,i,j;
    scanf("%d %d %d",&n,&p,&k);
    
        if(p-k<=1)
         {
            if(p+k<n)
             {
              for(i=1;i<=p-1;i++)
              printf("%d ",i);
              printf("(%d) ",p);
              for(i=p+1;i<=p+k;i++)
              printf("%d ",i);
              printf(">>");
              return 0;
            }
            else if(p+k>=n)
            {
                for(i=1;i<=p-1;i++)
                 printf("%d ",i);
                printf("(%d) ",p);
                for(i=p+1;i<=n;i++)
                 printf("%d ",i);
                 return 0;
            }
         }
         else 
         {
            printf("<< ");
            if(p+k<n)
             {
              for(i=p-k;i<=p-1;i++)
              printf("%d ",i);
              printf("(%d) ",p);
              for(i=p+1;i<=p+k;i++)
              printf("%d ",i);
              printf(">>");
              return 0;
            }
            else if(p+k>=n)
            {
                for(i=1;i<=p-1;i++)
                 printf("%d ",i);
                printf("(%d) ",p);
                for(i=p+1;i<=n;i++)
                 printf("%d ",i);
                 return 0;
            }
            
         }
         
    
}

