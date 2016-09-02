#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,x,y,z,excess,need,move=0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
    if(a>=x) excess=a-x,move+=excess/2;
    else need+=(x-a);
    if(b>=y) excess=b-y,move+=excess/2;
    else need+=(y-b);
    if(c>=z) excess=c-z,move+=excess/2;
    else need+=(z-c);
    if(move>=need) printf("Yes\n");
    else printf("No\n");
    return 0;
}
