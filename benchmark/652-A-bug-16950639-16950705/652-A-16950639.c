#include<stdio.h>
int main(int argc, char *argv[])
{
    int h1,h2,a,b,d1,s,p,count=0;
    scanf("%d%d",&h1,&h2);
    scanf("%d%d",&a,&b);

    d1=a*8;


    s=h1+d1;
    if(h1+d1<h2)
    {
        if(a<b)
        {
            printf("-1");
        }
        else
        {
        while(1)
        {

            if(s>=h2)
            {
                printf("%d",count);
                break;
            }
            else
            {
                s=s-(b*12);
                s=s+(a*12);
                count++;

            }
        }
        }
    }
    else
    {
        printf("0");
    }
    return 0;
}
