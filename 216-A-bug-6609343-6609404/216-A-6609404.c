#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(int argc, char *argv[])
{
    //freopen("in.txt","r",stdin);
    int a,b,c,s;
    scanf("%d%d%d",&a,&b,&c);
    s=c*(a+b-1)+(a-1)*(b-1);
    printf("%d\n",s);
    return 0;
}
