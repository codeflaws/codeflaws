#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,n,x,y,z,i,j,c=0,arr[100];
    scanf("%d",& n);
    if(n>=-9)
    {
        printf("%d", n);
    }
    else if(n<0 && -n/10<10)
    {
        printf("0");
    }
    else if(n<0 && -n%100==0)
    {
        y=n/10;
        printf("%d", y);
    }
    else
        {
         printf("-");
         a=-n;
        for(i=a,j=0;i>0;i=i/10,j++)
        {
            if(i<10)
            {
                x=i;
            }
            y=i/10;
            x=i%10;
            arr[j]=x;
            c++;
        }
        if(arr[0]>arr[1])
        {
            for(j=c-1;j>=0;j--)
            {
                if(j==0) continue;
                printf("%d", arr[j]);
            }
        }
        else if(arr[0]<arr[1])
        {
            for(j=c-1;j>=0;j--)
            {
                if(j==1) continue;
                printf("%d", arr[j]);
            }
        }
        else if(arr[0]=arr[1])
        {
            for(j=c-1;j>=0;j--)
            {
                if(j==0) continue;
                printf("%d", arr[j]);
            }
        }




        }
        return 0;
}
