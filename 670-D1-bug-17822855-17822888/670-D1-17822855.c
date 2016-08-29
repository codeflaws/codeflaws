#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define true 1
#define false 0
#define max(a,b) a>b?a:b
#define mn(a,b) a>b?b:a
//SUPERMEAT BOY
//MAGIC POWDER

int main(int argc, char *argv[])
{
    int i,n,k,val=0,cnt=0;
    scanf("%d%d",&n,&k);

    int ing[1000];
    int mat[1000];

    for(i=0;i<n;i++)
        scanf("%d",&ing[i]);

        for(i=0;i<n;i++)
        scanf("%d",&mat[i]);

    while(1){

        for(i=0;i<n;i++)
        {
            if(ing[i]<=mat[i])
               mat[i]-=ing[i];

            else
            {
                val=val +ing[i]-mat[i];
                mat[i]=0;
            }
        }

        if(val>k)
        {
           printf("%d",cnt);
           exit(0);
        }

        else
        {k-=val;
        cnt++;}


    }

return 0;
}

