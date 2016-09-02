#include<stdio.h>
long long int a[4];int k=0,i=4,j;
int main(int argc, char *argv[]){
for(i=0;i<4;i++){
scanf("%I64d",&a[i]);
for(j=0;j<i;j++) if(a[j]==a[i]) k++;
}
printf("%d",k);return 0;
}
