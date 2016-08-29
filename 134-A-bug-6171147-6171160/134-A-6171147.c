#include <stdio.h>
#include <string.h>
#include <inttypes.h>
int a[200003];
int b[200003];
int main(int argc, char *argv[])
{
    int i,j,n;
    int64_t sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int c=0;
    for(i=1;i<=n;i++)
    if((sum/n)==a[i]){
        b[c++]=i;
    }
    printf("%d\n",c);
    if(c==0)return 0;
    printf("%d ",b[0]);
    for(i=1;i<c;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
