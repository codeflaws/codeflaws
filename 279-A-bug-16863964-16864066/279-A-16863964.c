#include <stdio.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int x=0,y=0,X,Y,s=0,i,A1=1,A2=3,A3=2,A4=0,max;
    scanf("%d%d",&X,&Y);
    if ((X==0&&Y==0)||(X==1&&Y==0))
        printf("0");
    else if ((Y==X&&X>=0)||((fabs(X)<Y)&&Y>0))
    {
        if (fabs(X)<fabs(Y))
            max=fabs(Y);
        else
            max=fabs(X);
        for (i=1;i<max;i++)
        {
            A1+=4;
        }
        if (((fabs(X)<Y)&&Y>0))
            A1++;
        printf("%d",A1);
    }
    else if ((Y==X&&X<0)||((fabs(X)<fabs(Y))&&y<=0)||((Y==(-1*X)&&X>0&&Y<0)))
    {
        if (fabs(X)<fabs(Y))
            max=fabs(Y);
        else
            max=fabs(X);
        for (i=1;i<max;i++)
        {
            A2+=4;
        }
        if ((fabs(X)<fabs(Y))&&y<=0||((Y==(-1*X)&&X>0&&Y<0)))
            A2++;
        printf("%d",A2);
    }
    else if ((Y==(-1*X)&&X<0&&Y>0)||((fabs(Y)<fabs(X))&&X<=0))
    {
        if (fabs(X)<fabs(Y))
            max=fabs(Y);
        else
            max=fabs(X);
        for (i=1;i<max;i++)
        {
            A3+=4;
        }
        if ((fabs(Y)<fabs(X))&&X<=0)
            A3++;
        printf("%d",A3);
    }
    else if ((X==((-1*Y)+1)&&X>0&&Y<=0)||((fabs(Y)<fabs(X))&&X>=0))
    {
        if (fabs(X)<fabs(Y))
            max=fabs(Y);
        else
            max=fabs(X);
        for (i=1;i<max;i++)
        {
            A4+=4;
        }
        if ((fabs(Y)<fabs(X))&&X>=0)
            A4++;
        printf("%d",A4);
    }
    return 0;
}
