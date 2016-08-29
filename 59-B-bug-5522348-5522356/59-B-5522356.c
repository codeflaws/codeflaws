#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i,j,sum=0,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
if(sum%2==0)
{
    if(n==1)
    {
        printf("0");
        return 0;
    }
    for ( i = 0 ; i <=n-2; i++ )
	{
		for ( j = i + 1 ; j <=n-1 ; j++ )
		{
			if ( arr[i] > arr[j] )
			{
				temp = arr[i] ;
				arr[i] = arr[j] ;
				arr[j] = temp ;
			}
		}
	}
	for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum-=arr[i];
            break;
        }
    }
    if(i==n)
        sum=0;
}
printf("%d",sum);
return 0;
}



