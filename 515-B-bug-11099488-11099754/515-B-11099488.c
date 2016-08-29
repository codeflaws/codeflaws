#include "stdio.h"
int main(int argc, char *argv[]){
    int n,m,b,g,i,j,k=0,flag=1;
    int s[100]={0},l[100]={0};
    scanf("%d %d %d",&n,&m,&b);
    for(i=0;i<b;i++){
        scanf("%d",&j);
        s[j] = 1;
    }
    scanf("%d",&g);
    for(i=0;i<g;i++){
        scanf("%d",&j);
        l[j] = 1;
    }
    while(k<m*n){
        if(s[k%n]==1||l[k%m]==1){
            s[k%n] = 1;
            l[k%m] = 1;
        }
        k++;
    }
   // flag = 1;
    for(i=0;i<n;i++){
        if(s[i]==0){
            flag = 0;
            break;
        }
    }
    if(flag!=0)
        for(i=0;i<m;i++){
        if(l[i]==0){
            flag = 0;
            break;
        }
    }
    if(flag==0)
        printf("No\n");
    else
        printf("Yes\n");


    return 0;
}
