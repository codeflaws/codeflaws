#include<stdio.h>

int main(int argc, char *argv[])
{
    int h1,m1,h2,m2,m,h;
    char s;

    while(scanf("%d %c %d",&h1,&s,&m1)==3)
    {
        scanf("%d %c %d",&h2,&s,&m2);

        if(m1>=m2)
            m=m1-m2;

        else if(m2>m1)
        {
            m=(m1+60)-m1;

            h2+=1;
        }

        if(h1>=h2)
            h=h1-h2;

        else if(h2>h1)
            h=(h1+24)-h2;

        if(h<10&&m<10)
            printf("0%d:0%d\n",h,m);

        else if(h<10&&m>=10)
            printf("0%d:%d\n",h,m);

        else if(h>=10&&m<10)
            printf("%d:0%d\n",h,m);

        else if(h>=10&&m>=10)
            printf("%d:%d\n",h,m);
    }

    return (0);
}
