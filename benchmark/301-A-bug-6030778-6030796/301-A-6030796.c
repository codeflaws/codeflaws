#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,num=0,he=0,ok=0,min=9999999;
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++)
    {
        int a;
        scanf("%d",&a);
        if(a<0){num++;a=-a;}
        if(a==0)ok=1;
        he+=a;
        if(a<min)min=a;
    }
    if(ok==1)printf("%d",he);
    else if(num%2==0)printf("%d",he);
    else if(num>n&&(num-n)%2==0)printf("%d",he);
    else if(n>=num&&(n-num)%2==0)printf("%d",he);
    else printf("%d",he-2*min);
    return 0;
}
