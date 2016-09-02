#include<stdio.h>
int main(int argc, char *argv[])
{
    int c,c1,l,x,y;
    while(scanf("%d",&c)==1)
    {
        c1=c*(c-1)/2-1;
        int w[c1],ls[c1],ara[c],araw[c];
        for(l=0;l<c;l++)
        {
            ara[l]=0,araw[l]=0;
        }
        for(l=0;l<c1;l++)
        {
            scanf("%d%d",&w[l],&ls[l]);
            ara[w[l]-1]++,ara[ls[l]-1]++,araw[w[l]-1]++;
        }
        for(l=0;l<c;l++)
        {
            if(ara[l]!=c-1){
                x=l;
                break;
            }
        }
        for(l=l+1;l<c;l++)
        {
            if(ara[l]!=c-1){
                y=l;
                break;
            }
        }
        if(araw[x]>araw[y]){
            printf("%d %d\n",x+1,y+1);
        }
        else{
            printf("%d %d\n",y+1,x+1);
        }
    }
    return 0;
}
