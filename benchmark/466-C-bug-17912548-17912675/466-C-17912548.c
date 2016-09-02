#include<stdio.h>
#include<math.h>
#include<string.h>

#define LL long long
#define MAX 500000


int main(int argc, char *argv[])
{
    int n,m=0,j=0,r=0;
    LL i;
    LL temp[MAX]={0};
   // printf("%d\n",temp[n]);
    LL t=0,s=0;
    scanf("%d",&n);
    LL arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for (i=1;i<= n;i++)
			temp[i] = temp[i - 1] + arr[i-1];
			//printf("%d\n",temp[n]);
    if( (temp[n]%3)!=0 || n<3)
    {
        printf("0");
        exit(0);
    }
    LL q=temp[n]/3;
    LL count[2]={0};
    for (i=1; i<=n; i++)
    {
		if (temp[i] == q * 2)
        {
            count[1] += count[0];
        }
	    //printf("count[1]=%d",count[1]);
		if (temp[i] == q)
        {
           	count[0]++;
        }
		//printf("count[0]=%d",count[0]);
	}

    if (q == 0)
	{
        count[1] =count[1]- count[0] + 1;
    }



    printf("%lld",count[1]);
    return 0;


}
