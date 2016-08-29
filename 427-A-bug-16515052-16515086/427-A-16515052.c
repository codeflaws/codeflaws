#include<stdio.h>
#include<limits.h>
int main(int argc, char *argv[]){
int arr[150000];
int a,b,c,d,e,f;
scanf("%d",&a);
int i;
for(i=0;i<a;i++){
        scanf("%d",arr+i);
}
int min=INT_MAX;
int s=0;
for(i=0;i<a;i++){
s+=arr[i];
if(s<min)
    min=s;
}
printf("%d",abs(min));

return 0;
}

