#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,j,a,b,ma=0,k=1,r,dm,c=0;
    scanf("%d%d",&a,&b);
    i=a;
    while(1)
    {
        dm=i;
        while(dm!=0)
        {
            r=dm%10;
            if(r==4 || r==7)
            {
                ma=r*k+ma;
                k*=10;
            }
            dm/=10;
        }
        if(ma==b)
        {
            printf("%d",i);
            break;

        }
        i++;
        ma=0;
        k=1;
    }
    return(0);
}
