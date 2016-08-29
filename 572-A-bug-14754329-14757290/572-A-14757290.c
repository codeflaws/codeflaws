#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,m,a,b,i,count=0,x=0;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    long long int ara1[n];
    long long int ara2[m];
    for(i=0;i<n;i++){
        scanf("%lld",&ara1[i]);
    }
    for(i=0;i<m;i++){
        scanf("%lld",&ara2[i]);
    }
    for(i=0;i<n;i++){
        if(ara1[i]<ara2[m-b]){
            count++;
            if(count==a){
                x=1;
                break;
            }
        }
        else{
            x=0;
            break;
        }
    }
    if(x==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
