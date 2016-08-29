#include<stdio.h>

int main(int argc, char *argv[]){
    int t,n,i,j,k,ans=0;
    float arr[11][11]={0};
    scanf("%d %d",&n,&t);
        for(i=0;i<t;i++){
        arr[1][1]+=1;
            for(j=1;j<=n;j++)
                for(k=1;k<=j;k++)
                    if(arr[j][k]>1.0){
                        arr[j+1][k]+=(arr[j][k]-1)/2;
                        arr[j+1][k+1]+=(arr[j][k]-1)/2;
                        arr[j][k]=1;
                    }
    }
    for(j=1;j<=n;j++){
        for(k=1;k<=j;k++){
            if(arr[j][k]==1)
                ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}

