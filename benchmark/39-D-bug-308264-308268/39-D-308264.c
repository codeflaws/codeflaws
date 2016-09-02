#include<stdio.h>
int main(int argc, char *argv[])
{
    int a1,b1,c1,a2,b2,c2,count=0;;
    scanf("%d%d%d",&a1,&b1,&c1);
    scanf("%d%d%d",&a2,&b2,&c2);
    if(a1==a2)
    count++;
    if(b1==b2)
    count++;
    if(c1==c2)
    count++;
    if(count==2)
    {
        printf("YES");
    }
    else
    printf("NO");
    return 0;
}