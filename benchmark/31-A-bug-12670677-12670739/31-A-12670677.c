#include<stdio.h>
//#include<conio.h>
//#include<process.h>
int main(int argc, char *argv[]){
    int arr[10000];
    int i, j, a, n,k;
    //int *p1;int *p2;int *p3;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    //checking all triplet except when j=i & k=i
    //for (i = 0; i < n; i++)
    //printf("%d\n", arr[i]);

for(i=0;i<n;i++){
    for(j=0;j<n;j++){

        for(k=0;k<n;k++){

   if( arr[i]==(arr[j]+arr[k])&& (i!=j)&&(i!=k)){
    printf("%d% d% d\n",i+1,j+1,k+1);
    //printf(" %d% d% d\n",arr[i],arr[j],arr[k]);
    exit(0);
   }

        }
    }
}
printf("%d\n",-1);
return 0;
}
