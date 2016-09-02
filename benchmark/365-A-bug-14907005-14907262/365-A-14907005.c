#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int n,k,arr[10],i,j,cnt,flag;
    char str[100][50];

    while(scanf("%d %d\n",&n,&k)==2)
    {
        for(i=0; i<n; i++)
        {
            scanf("%s",str[i]);
        }

        cnt=0;

        for(i=0; i<n; i++)
        {
            memset(arr,0,sizeof(arr));

            for(j=0; str[i][j]; j++)
            {
                arr[str[i][j]-48]++;
            }

            flag=0;

            for(j=0; j<=k; j++)
            {
                if(arr[j]>=1&&arr[j]<=k)
                    flag=0;

                else
                {
                    flag=1;

                    break;
                }
            }

            if(flag==0)
                cnt++;
        }

        printf("%d\n",cnt);
    }

    return (0);
}
