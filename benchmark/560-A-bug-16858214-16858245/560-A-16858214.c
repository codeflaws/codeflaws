#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(i=1;i<=5;i++){
        if(a[i]==1){
            flag=1;
        }
        else{
            continue;
        }
    }
    if(flag==1){
        printf("-1");
    }
    else{
        printf("1");
    }
    return 0;
}
