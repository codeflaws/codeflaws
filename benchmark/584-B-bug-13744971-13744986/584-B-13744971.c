#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
    int n,i;
    long long int p,w;
    scanf("%d",&n);
    p=27;
    w=7;
    for(i=1;i<n;i++){
        p = (p*27)%1000000007;
        w = (w*7)%1000000007; 
    }
    if(p>w) printf("%d",p-w);
    else printf("-1");
    return 0;
}