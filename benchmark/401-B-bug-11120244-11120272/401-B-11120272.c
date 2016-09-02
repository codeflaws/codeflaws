#include<stdio.h>

int main(int argc, char *argv[])
{
    int x,k,p,i,q,count=0,r,min=0;
    scanf("%d %d",&x,&k);
    int ara[x];
    for(i=0;i<x;i++)ara[i]=0;
    for(i=1;i<=k;i++){
        scanf("%d",&r);
        if(r==1){
            scanf("%d %d",&p,&q);
            ara[p]=1;
            ara[q]=1;
            count+=2;
        }
        else {
            scanf("%d",&p);
            ara[p]=1;
            count++;
        }
    }
    for(i=1;i<x;){
        if(ara[i]==0){
            if(ara[i+1]==0){
                min++;
                i+=2;
            }
            else{
                min++;
                i+=1;
           }
        }
        else i++;
    }
    printf("%d %d",min,x-1-count);
    return 0;
}
