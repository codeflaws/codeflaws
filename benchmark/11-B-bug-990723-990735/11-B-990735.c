#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,i;
    int s=0;
    scanf("%d",&a);
    a=abs(a);
    for(i=1; ;i++)
        {
        s+=i;
        if(s>=a&& !((s-a)%2))
            break;
        }
    if(a==0) printf("0");
       else printf("%d",i);
    return 0;
}