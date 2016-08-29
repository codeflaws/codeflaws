#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    for( ; ; )
    {
        if(a==0||b==0)
        {
            break;
        }
        else if(a>=b)
        {
            a=a-2;
            b=b+1;
            count++;
        }
        else
        {
            b=b-2;
            a=a+1;
            count++;
        }
    }
    printf("%d",count);
return 0;
}
