#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n;
    char buffer[21];
    char tel[21];
    int dig=21;
    int i;
    
    scanf("%d", &n);
    
    scanf("%s", tel);
    n--;
    
    printf("%d ", n);
    
    while(n>0){
        scanf("%s", buffer);
        
        for(i=0;i<dig;i++){
            if(tel[i]!=buffer[i])
                dig = i;
        }
        
        n--;
    }
    
    printf("%d", dig);
    
    return 0;
}
