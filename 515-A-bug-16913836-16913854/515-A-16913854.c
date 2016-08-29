#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,s;
    scanf("%d %d %d",&a,&b,&s);
    if(a<0)
        a=0-a;
    if(b<0)
        b=0-b;
        if(a+b<=s && (a+b)%2==0 && s%2==0)
            printf("Yes");
        else if(a+b<=s && (a+b)%2!=0 && s%2!=0)
            printf("Yes");
        else
            printf("No");
return 0;
}
