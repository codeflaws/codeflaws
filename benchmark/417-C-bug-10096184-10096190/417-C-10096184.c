#include<stdio.h>

#define ll long long
int n,k,i,j,l;
int main(int argc, char *argv[]) {

    scanf("%d%d",&n,&k);
    
    if(2*k>(n-1)){
        printf("-1");
        return 0;
    }
    
    printf("%d",n*k);
    
    for(i=1;i<=n;i++){
        
        j=i+k;
        if(j>n)
        j=j%n;
        
        for(l=i+1;l!=j+1;l++){
            
            if(l>n)
            l=1;
            
            printf("%d %d\n",i,l);
            
            
        }
        
        
        
    }
    
    
    
    return 0;
}