#include <stdio.h>
#include <stdlib.h>
/*
int main(int argc, char *argv[])
{  int n,k,l=0,i,a[50];
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        if(a[1]!=0){
    l=k;
    while(l<n){
    if(a[l]==a[l+1]){
        l++;
    }
    else
        break;
    }}
    printf("%d",l);

    return 0;
}*/

int main(int argc, char *argv[]){
    int n,k,a[50],count,i;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
}
count=0;
if(a[1]>0){
        i=1;
    while(a[i]>=a[k]&&i<=n){
     count++;
     i++;
    }}
printf("%d\n",count);
return 0;}
