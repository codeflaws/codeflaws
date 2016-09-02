#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
int running=1, i, n, dest, *arr;
scanf("%d %d", &n, &dest);
arr=(int *)malloc(sizeof(int)*(n-1));
int temp;

for(i=0;i<n-1;i++){
scanf("%d", &arr[i]);
}

for(i=0;i<n-1;i++){

if(dest==running) {
printf("YES");
break;
}
if(running>dest){
printf("NO");
break;
}
running+=arr[running-1];
}
return 0;
}