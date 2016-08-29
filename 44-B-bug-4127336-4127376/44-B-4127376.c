#include<stdio.h>
int main(int argc, char *argv[])
{

    int n,a,b,c,sum;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    int count =0;
    int i,j;
    for(i=0;i<=a;i++)
    {
        if(i%2)
            continue;
        for(j=0;j<=b;j++)
        {
            sum=0;
            sum=(n)-(int)(i*0.5)-(j*1);
           if(sum<0)
            continue;
            if((sum%2 ==0)&&((sum/2)<=c))
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
