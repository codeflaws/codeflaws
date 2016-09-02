#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    long long int m,n,i,j,sum=0,count=0;
    scanf("%lld %lld",&m,&n);
    for(i=2;i<=n;i++) {
        if(n%i==0){break;}

    }
    if(n==i){sum=1;}
    if(sum==1) {

    for(i=m+1;i<=n-1;i++) {
        for(j=2;j<=i;j++) {
        if(i%j==0) {
           // count++;
            break;
        }
    }
    if(i==j)count++;
    }
    if(count==1) {
        printf("NO");
    }
    else {
        printf("YES");

    }
    }
    else printf("NO");
    return 0;
}
