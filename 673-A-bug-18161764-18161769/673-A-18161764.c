#include <stdio.h>

int main(int argc, char *argv[])
{
    //printf("Hello World!\n");
    int n;
    scanf("%d", &n);
    int i, arr[n], brr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    brr[0]=arr[0];
    for(i=1; i<n; i++)
    {
        brr[i]=arr[i]-arr[i-1];
    }
    /*for(i=0; i<n; i++)
    {
        printf("%d ", brr[i]);
    }*/
    if(n==1)
    {
        if(arr[0]>15)
        {
            printf("15");
        }
        else
            printf("%d", arr[0]+15);
    }
    else{
    int count=0;
    for(i=0; i<n; i++)
    {
       if(brr[i]>15)
       {
           count=1;
           break;
       }
    }
    int sum=0;
    //printf("%d\n", count);
    if(count==1 && i==0)
    {
        printf("15");
    }
    
    else if(count==1 && i!=0)
    {
        sum=arr[i-1]+15;
        if(sum>90)
        {
            printf("90");
        }
        else
            printf("%d", sum);
    }
    else if(count==0 && (90-arr[n-1]<15))
    {
        printf("90");
    }
    else if(count==0 && (90-arr[n-1]>15))
    {
        printf("%d", arr[n-1]+15);
    }
    }
    return 0;        
    }
    
    

