#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int i,j,sum=0,max=-1,min=10002,flag=0;
    int arr[10001][2]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        arr[j][0]++;
        arr[j][1]=i;
        sum+=j;
        if(j>max)
        max=j;
        if(j<min)
        min=j;
    }
    if((sum%n)!=0)
    {
    printf("Unrecoverable configuration.");
    printf("m");
    }
    else
    {
        int d=sum/n;
        if(arr[d][0]==n)
        printf("Exemplary pages.");
        else
        {
            for(i=min+1;i<d;i++)
            {
                
                if(arr[i][0]!=0)
                {
                printf("Unrecoverable configuration.");
                flag=1;
                break;
            }
            }
                for(i=max-1;i>d;i--)
            {
                if(arr[i][0]!=0)
                {
                printf("Unrecoverable configuration.");
                flag=1;
                break;
                }
            }
            if(flag==0&&(arr[max][0]!=1)||(arr[min][0]!=1))
            {
            printf("Unrecoverable configuration.");
            }
            else if(flag==0)
            printf("%d ml. from cup #%d to cup #%d.",d-min,arr[min][1]+1,arr[max][1]+1);
        }
    }
    return 0;
}
 