#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,flag=0,digit=0,lucky=0;
    scanf("%d",&n);
    int p=n;
    for(i=0;;i++)
    {
        if(p%10==4 || p%10==7)
        {
            lucky++;
        }
        p=p/10;
        digit++;
        if(p==0)break;
    }
    if(digit==lucky)
    {
        printf("YES");
    }
    else
    {
        if(n%4==0 || n%7==0 || n%44==0 || n%77==0 || n%47==0 || n%74==0 ||  n%444==0 || n%777==0 || n%477==0 ||  n%747==0 || n%774==0 ||  n%744==0 ||  n%474==0 ||  n%447==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }

    }
return 0;
}
