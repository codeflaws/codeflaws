#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i,j;
    scanf("%d %d \n",&n,&m);
    for(i=1;i<=n;i++)
     {
       for(j=1;j<=m;j++)
            if(i%2==1)
              printf("#");
            else
             if((i%4==0)&&(j==1))
              printf("#");
            else
            if((i%2==0)&&(j==m))
              printf("#");
            else
                printf(".");

       printf("\n");
    }
    return(0);
}
