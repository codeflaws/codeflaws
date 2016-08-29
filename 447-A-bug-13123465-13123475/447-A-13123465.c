#include<stdio.h>

int main(int argc, char *argv[]){
    long int p,n,i,j,k,a,temp,temp1[301],count=0;
    scanf("%li %li",&p,&n);
    for(i=0;i<n;i++){
        
        scanf("%li",&a);
        count++;
        temp1[i]=a% p;
        printf("temp1[%d]:(%d)",i,temp1[i]);
        for(k=0;k<count;k++){
        for(j=k+1;j<count;j++){
        
            if(temp1[k]==temp1[j]){
            printf("%li",j+1);
            
            return 0;
        }
        }
    }
    }
    
    
    printf("-1");
    
    return 0;
    
    
    
}