#include <stdio.h>
#define MAX 100000
int main(int argc, char *argv[])
{
    long long int a,b,n,indx=0,i,min;
    int a1[MAX],b1[MAX];
    scanf(" %lld",&n);

    for(b=0;b*7<=n;b++){
        a= (n- 7*b)/4;
        if(4*a+7*b==n){
            a1[indx]=a;
            b1[indx]=b;
            indx++;
        }
    }
    if(a1[0]==0 && b1[0]==0){
        printf("-1");
        return 0;
    }
    min=a1[0]+b1[0];
    a=a1[0],b=b1[0];
    for(i=1;i<indx;i++){
        if(b1[i]+a1[i]<min){
            min=a1[i]+b1[i];
            a=a1[i];
            b=b1[i];
        }
        if(b1[i]+a1[i]==min){
            if(b1[i]<b){
               b=b1[i];
               a=a1[i];
            }
        }
    }
    long long int num=0;
    printf("%lld %lld",a,b);
    //for(i=0;i<indx;i++){
      //  printf("%d %d\n",a1[i],b1[i]);
    //}
    for(i=0;i<a;i++){
        printf("4");
    }
    for(i=0;i<b;i++){
        printf("7");
    }
    //printf("%lld",num);
    return 0;
}
