#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n,x,y,p,need;
    float z;
    scanf("%d %d %d",&n,&x,&y);
    z=(n*y)/100.00;
    p=ceil(z);
    if(p>x) printf("%d",p-x);
    else printf("0");

    return 0;
}
