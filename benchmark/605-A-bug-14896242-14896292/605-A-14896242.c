#include<stdio.h>
#include<string.h>
int a[100005];
int b[100005];
int main(int argc, char *argv[]){
    int n,k,max;
    while(scanf("%d",&n)!=EOF){
        max = 0;
        memset(b,0,sizeof(b));  
        for(int i = 0;i<n;i++){
            scanf("%d",&a[i]);
            b[a[i]] = i;    
        }
        k = 1;
        for(int i=1;i<n;i++){
            if(b[i+1]>b[i]){
                k++;
            }
            else{
                k = 1;
            }
            if(k>max)
                max = k;
        }
        printf("%d\n",n-max);
    }
return 0;
}