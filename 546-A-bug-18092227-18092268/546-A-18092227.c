#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int k,n,w,i,cnt=0,sum=0,brw;
    scanf("%d %d %d",&k,&n,&w);
    for(i=0;i<w;i++){
        cnt=k*(i+1);
        sum=sum+cnt;
    }
    brw=sum-n;
    if(brw==0){
        printf("%d",0);
    }
    else
    printf("%d",brw);

    return 0;
}
