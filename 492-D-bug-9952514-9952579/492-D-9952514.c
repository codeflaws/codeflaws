#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char t[2000000][6];
int main(int argc, char *argv[])
{
    long long int n,x,y,q,i;
    scanf("%lld%lld%lld",&n,&x,&y);
    int a=x;
    int b=y;
    int k=1;
    for(k=1;y!=x;k++)
    {
        if (x>y) {strcpy(t[k],"Vanya");y+=b;}
        else  {strcpy(t[k],"Vova");x+=a;}
    }
    k++;
    strcpy(t[0],"Both");
    strcpy(t[k-1],"Both");
    for(i=0;i<n;i++)
    {
        scanf("%ll4d",&q);
        printf("%s\n",t[q%k]);
    }
    return 0;
}
