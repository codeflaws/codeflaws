#include<stdio.h>
int main(int argc, char *argv[])
{
    int x,y,i,j,a,b;
    while(1) {
    scanf("%d%d%d%d",&x,&y,&a,&b);
    int k=0;
    int c[10005],d[10005];
    for(i=a;i<=x;i++)
    {
        for(j=b;j<=y;j++)
        {
            if(i<=j)
            break;
            c[k]=i;
            d[k]=j;
            k++;
        }
    }
    printf("%d\n",k);
    for(i=0;i<k;i++)
    printf("%d %d\n",c[i],d[i]);
}
return 0;
}