#include<stdio.h>
#include<math.h>

float dist(int a,int b,int c,int d)
{
    int x,y,z;
    x=pow((c-a),2);
    y=pow((d-b),2);
    printf("%d %d\n",x,y);
    return sqrt(x+y);
}
int main(int argc, char *argv[])
{
    int n,k,x,y,a,b;
    float sum=0;
    scanf("%d %d",&n,&k);
    scanf("%d %d",&a,&b);
    n=n-1;
    while(n--)
    {
        scanf("%d %d",&x,&y);
        sum+=dist(a,b,x,y);
        a=x;
        b=y;
    }
    sum=sum*k;
    sum=sum/50;
    printf("%0.9f\n",sum);
    return 0;
}
