#include <stdio.h>
int main(int argc, char *argv[])
{
    char c[10];
    scanf("%s", c);
    int num1=10*(c[0]-'0')+(c[1]-'0');
    int num2=10*(c[3]-'0')+(c[4]-'0');
    //printf("%d %d", num1, num2);
    int ttemp=num1;
    int pnum1=0;
    while(ttemp)
    {
        int temp=ttemp%10;
        pnum1*=10;
        pnum1+=temp;
        ttemp/=10;
    }
    if(num1/10==0)
        pnum1*=10;
    //printf(" %d\n", pnum1);
    if(num2<pnum1 && pnum1<=60)
    {
        if(num1/10==0) 
                {
                    if(pnum1/10==0)
                    {
                        printf("0%d:0%d\n", num1, pnum1);       
                    }
                    else
                        printf("0%d:%d\n", num1, pnum1);
                }
                else
                {
                    if(pnum1/10==0)
                    {
                        printf("%d:0%d\n", num1, pnum1);       
                    }
                    else
                        printf("%d:%d\n", num1, pnum1);
                }
    }
        //printf("%d:%d\n", num1, pnum1);
    else
    {
        while(1)
        {
            num1+=1;
            num1%=24;
            ttemp=num1;
            pnum1=0;
            while(ttemp)
            {
                int temp=ttemp%10;
                pnum1*=10;
                pnum1+=temp;
                ttemp/=10;
            }
            if(num1/10==0)
                pnum1*=10;
            //printf("num1=%d pnum1=%d\n", num1, pnum1);
            if(pnum1<=60)
            {
                if(num1/10==0) 
                {
                    if(pnum1/10==0)
                    {
                        printf("0%d:0%d\n", num1, pnum1);       
                    }
                    else
                        printf("0%d:%d\n", num1, pnum1);
                }
                else
                {
                    if(pnum1/10==0)
                    {
                        printf("%d:0%d\n", num1, pnum1);       
                    }
                    else
                        printf("%d:%d\n", num1, pnum1);
                }
                break;
            }
        }
    }
    return 0;
}
