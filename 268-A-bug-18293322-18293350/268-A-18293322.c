#include<stdio.h>
int main(int argc, char *argv[]){
    int T;while(T){
    int n,i,j,count=0;
    scanf("%d",&n);
    int arr[n][2];
    for(i=0;i<n;i++)
        scanf("%d%d",&arr[i][0],&arr[i][1]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j][0]==arr[i][1])
                count++;
        }
    }
    printf("%d\n",count);
    }return 0;
}
