#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main(int argc, char *argv[]){
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    j=1;i=2*n;
    int a[100001]={0};
    while (k && j<i) {
        while(i-j>k && j<i)
            j++;
        if(i==j)
            break;
        printf("%d %d ",i,j);
        a[i]=a[j]=1;
        k-=i-j;
        i--;
        j++;
    }
    j=1;
    while (j<2*n) {
        if(!a[j])
            printf("%d ",j);
        j++;
    }
    return 0;
}