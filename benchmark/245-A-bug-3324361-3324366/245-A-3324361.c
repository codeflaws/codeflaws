#include"stdio.h"
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    static num[3];
    int a,b,c;
    int counta=0,countb=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        num[a]++;
        if(a==1)
        {
            counta+=b;
        }
        else countb+=b;
    }
    if(counta>=(num[1])*5 ) printf("LIVE");
    else printf("DEAD");
    printf("\n");
    if(countb>=(num[2])*5) printf("ALIVE");
    else printf("DEAD");
    return 0;
}
