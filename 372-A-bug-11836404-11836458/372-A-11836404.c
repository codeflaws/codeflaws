#include <stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(int argc, char *argv[]) {
    int a[500001],n,i,j,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    j=n/2;
    if(n%2!=0)
        j++;
    i=0;
    ans=n/2;
    qsort(a, n, sizeof(int), cmpfunc);
    for(j;j<n;j++){
        if(a[j]>=2*a[i])
            i++;
       else
            ans++;
    }
    printf("%d",ans);
    return 0;
}
