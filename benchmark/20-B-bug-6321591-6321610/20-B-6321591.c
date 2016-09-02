#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float A , B , C , num , den ,b , c=0;
    int n ,flag =0;
    float root1, root2;
    scanf("%f%f%f",&A,&B,&C);
    num =(B*B)-(4*A*C);
    if (num<0)
    {
        flag=1;
    }
    den =2*A;
    b = -1 *B;
    root1 = (b + sqrt(num)) / den;
    root2 = (b - sqrt(num)) / den;
    if ((A==0) && (B==0) && (C==0))
    {
        printf("-1");
    }
    else if ((A==B) && (B==C))
    {
        printf("0");
    }
    else if (B==0 && C==0)
    {
        n=1;
        printf("%d\n",n);
        root1=0;
        printf("%f",root1);
    }
    else if (flag==1)
    {
        printf("-1");
    }
    else if ((A==0) && (B==0))
    {
        printf("0");
    }
    else if ((A==0) && (B!=0))
    {
            n=1;
            printf("%d\n",n);
            float f= (-1*C)/B;
            printf("%f",f);
    }
    else if (root1==root2)
    {

        if (root1==0)
        {
            printf("0");
        }
        else
        {
            n=1;
            printf("%d\n",n);
            printf("%f",root1);
        }
    }
    else if (root1<root2)
    {

        n=2;
         printf("%d\n",n);
        printf("%f\n%f",root1,root2);
    }
    else
    {
        n=2;
        printf("%d\n",n);
        printf("%f\n%f",root2,root1);;
    }
    return 0;
}
