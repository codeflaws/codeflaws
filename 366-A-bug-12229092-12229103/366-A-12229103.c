#include<stdio.h>
int min(int a,int b)
{
    return a<b?a:b;
}
int main(int argc, char *argv[])
{
    int T,i,y;
    int a[4][4];
    scanf("%d",&T);
    for(i=0;i<4;i++)
        for(y=0;y<4;y++)
        scanf("%d",&a[i][y]);
    int sign=0;
    for(i=0;i<4;i++)
        if(min(a[i][0],a[i][1])+min(a[i][2],a[i][3])<=T)
        {
            printf("%d %d %d\n",i+1,min(a[i][0],a[i][1]),T-min(a[i][0],a[i][1]));
            sign=1;
            break;
        }
    if(!sign)
        printf("-1\n");
}
