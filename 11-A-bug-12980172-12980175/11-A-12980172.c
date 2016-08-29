#include <stdio.h>

//using namespace std;

int main(int argc, char *argv[])
{
    int len,d,i;
    int count=0;
    scanf("%d %d",&len,&d);
    int arr[len];
    int temp=0;
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);

        if(i>0)
        {
            if(arr[i]<=arr[i-1])
            {

            temp=(((arr[i-1]-arr[i])/d)+1);
            count=temp+count;
            arr[i]+=(temp*d);
            printf("i=%d\n temp=%d \n count=%d\n arr[i]=%d\n\n ", i,temp,count,arr[i]);
            }
        }
            /*while((arr[i]<=arr[i-1])&& i>0)
            {
                arr[i]=arr[i]+d;
                count++;
            }*/
    }
/*    while(arr[i]<=arr[i-1])
        {
            arr[i]=arr[i]+d;
            count++;
        }
*/
    //}
    printf("%d",count);
    //cout<<"\n"<<count;
    return 0;
}
