#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    float x1,x2;
    scanf("%d %d %d",&a,&b,&c);
    if(a==0)
    {
        if(b!=0)
        {
            printf("1\n");
            printf("%f\n",(float)(-1*c)/(float)b);
        }
        else if(b==0 && c!=0)
        printf("0");
        if(b==0 && c==0)
        printf("-1");
    }
    else if(pow(b,2)<4*a*c)
    printf("0");
    else if((float)pow(b,2)==(float)4*a*c)
    {
    printf("1\n");
    printf("%f\n",-1*((float)b/(float)(2*a)));
    }
    else 
       {
            x1=(float)(-b+(float)sqrt(pow(b,2)-4*a*c))/(float)(2*a);
            x2=(float)(-b-(float)sqrt(pow(b,2)-4*a*c))/(float)(2*a);
            printf("2\n");
            if(x1<x2)
                {
                    printf("%f\n",x1);
                    printf("%f\n",x2);
                }
            else
                {
                    printf("%f\n",x2);
                    printf("%f\n",x1);  
                }
       }
return 0;
}