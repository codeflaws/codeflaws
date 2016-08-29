#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;scanf("%d",&n);
    int i,x;
    int data[3000];
    int j;
    int temp;
    int answer=0;
    int shift=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);data[i]=x;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    
    for(i=1;i<=n;i++)
    {
        if(data[i-1]==i+shift)
        {
            ;
        }
        else if(data[i-1]>i+shift)
        {
            int dif=data[i-1]-i-shift;
            shift+=dif;
        }
        else if(data[i-1]<i+shift)
        {
            answer+=(i+shift-data[i-1]);
        }
    }
    printf("%d",answer);
    return 0;
}