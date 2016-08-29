#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,m,a,b,i,j,k,x,y,t,z;

    scanf("%d %d %d %d",&n,&m,&a,&b);

    if(n%m==0)
    {
        i=b/m;
        if(i<a)
        {
            j=(n/m)*b;
            printf("%d\n",j);
        }
        else
        {
            j=n*a;
            printf("%d\n",j);
        }
    }
    else if(n%m!=0)
    {
        i=b/m;
        if(i<=a)
        {
            k=n%m;
            x=n-k;
            y=(b*x)/m;
            t=k*a;
            j=y+t;
            z=((n/m)+1)*b;
            printf("%d\n",j<=z?j:z);

        }
        else
        {
            j=n*a;
            printf("%d\n",j);
        }
    }
    //main();
return 0;
}
