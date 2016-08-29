#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int d,sum;
    scanf("%d%d",&d,&sum);
    int arr[d][2];
    int i,j;
    int result[d];
    int max_sum=0,min_sum=0;

    for(i=0;i<d;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        max_sum+=arr[i][1];
        min_sum+=arr[i][0];
        result[i]=arr[i][0];

    }
    //printf("%d %d %d\n",min_sum,sum,max_sum);
    if(min_sum > sum || sum > max_sum)
    {
        printf("NO\n");
        return 0;
    }

    else
    {
        printf("YES\n");
        int flag = 0;
        for(;min_sum <= sum;)
        {
            //printf("in first loop\n");
           for(i=0;i<d;i++)
           {
               //printf("in inner loop\n");
               if(sum == min_sum)
               {
                   for(j=0;j<d;j++)
                   {
                       printf("%d ",result[j]);
                   }
                   flag =1;
                   break;
               }
               if(result[i]+1 >! arr[i][1])
               {
                   //printf("in second condition\n");
                   result[i]++;
                   min_sum++;
               }
           }
           if(flag==1)
            break;

        }
    }
    return 0;
}
