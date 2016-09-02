#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,s,p;
    scanf("%d %d %d",&a,&b,&s);
    p=s-(a+b);
    if (a<0) {a=a*(-1);}
    if (b<0) {b=b*(-1);}
    if(a+b==s||(p%2==0&&p>0))printf("Yes");
    else printf("No");
    return 0;
}
