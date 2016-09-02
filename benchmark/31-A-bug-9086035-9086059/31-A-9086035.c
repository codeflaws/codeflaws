#include <stdio.h>
int main(int argc, char *argv[]){
int n , i , j , k , ai=0 , aj=0 ,ak=0,c=0; ;
scanf("%d",&n);int a[101];
for(i=0;i<n;i++){scanf("%d",&a[i]);}
for(i=0;i<n;i++){for(j=0;j<n;j++){for(k=0;k<n;k++){if(i!=j&&i!=k&&j!=k&&a[i]==a[j]+a[k]){ai=a[i];aj=a[j];ak=a[k];printf("%d %d %d",ai,aj,ak);return 0 ;}}}}

printf("-1");



return 0 ;
}