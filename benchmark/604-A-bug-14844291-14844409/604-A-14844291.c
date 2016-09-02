#include<stdio.h>
int main(int argc, char *argv[])
{
    float x[5],m[5],w[5];
    int i=0;
    for(i=0;i<5;i++)
    {
        x[i]=(i+1)*500;
    }
    for(i=0;i<5;i++)
    {
        scanf("%f",&m[i]);
    }
    for(i=0;i<5;i++)
    {
        scanf("%f",&w[i]);
    }
    float h1,h2;
    scanf("%f %f",&h1,&h2);
    float g[5],k[5];
    for(i=0;i<5;i++)
    {
       g[i]=  1-(m[i]/250) ;
       g[i]=(g[i])* x[i];
       k[i]=0.3*m[i];
    }
    float sum=0;
    for(i=0;i<5;i++)
    {
        if(k[i] >= (g[i]- (50 * w[i]) ) )
            sum= sum + k[i];
        else
            sum= sum +  (g[i]- (50 * w[i]) );


    }
    sum =sum + 100* h1 - 50*h2;
    int o=(int)sum;
    printf("%d\n",o);
return 0;
}
