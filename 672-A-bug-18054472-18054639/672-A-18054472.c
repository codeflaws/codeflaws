#include<stdio.h>
int main(int argc, char *argv[])
{
    int i;
    int c=0,d=0,e=0;
    scanf("%d",&i);
    if(i<=9)
    {
        printf("%d\n",i);
    }
    else if(i>=10&&i<=189)
    {
        if(i%2==0)
        {
            c=((i-10)/20)+1;
            printf("%d\n",c);
        }

        else
        {
            d=((i-10)%20)/2;
            printf("%d\n",d);
        }

    }
    else
    {
        if((i%3)==1)
        {
            c=((i-189)/300)+1;
            printf("%d\n",c)  ;
        }
        else if((i%3)==2)
        {
            d=(i-191)/22;
            printf("%d\n",d)  ;
        }
        else
        {
            e=((i-190)%30)/3;
            printf("%d\n",e)  ;


        }


    }

return 0;
}



