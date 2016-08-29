#include<stdio.h>

int main(int argc, char *argv[])
{
    int v1,v2,t,d,sum,i,x,j;
    scanf("%d%d%d%d",&v1,&v2,&t,&d);
    int ara[t+1];
    //for(i=1;i<=t;i++)ara[i]=10000;
    ara[1]=v1;ara[t]=v2;
    sum=v1+v2;
    for(i=2;i<t;i++){
        ara[i]=ara[i-1]+d;
        //ara[t-i+1]=ara[t-i+2]+d;
        //if(ara[t-i+1]-ara[t-i]>d)ara[t-i+1]-=d;
        sum+=ara[i];
        if((ara[i]-((t-i-1)*d))>ara[t]){
            sum-=ara[i];
            break;
        }
    }
    //printf("%d",i);
    for(j=t-1;j>=i;j--){
        ara[j]=ara[j+1]+d;
        sum+=ara[j];
    }
    if(ara[i]-ara[i-1]>d){
        sum-=ara[i];
        ara[i]=ara[i-1]+d;
        sum+=ara[i];
    }
    for(i=1;i<=t;i++)printf("%d\n",ara[i]);
    printf("%d",sum);
    return 0;
}
