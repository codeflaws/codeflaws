#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int a[100001] = {0}, b[100001] = {0};
int mark[100001] = {0}, n, pa = 0, pb = 0;

void merge(){
    int i;
    for(i=0; i<n; i++){
        if(a[pa] < b[pb])
            pa++;
        else
            pb++;
    }
}

int main(int argc, char *argv[]){
    int i;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    merge();
    if(pa >= pb){
        for(i=0; i<pa; i++)printf("1");
        for(i=0; i<n - pa; i++)printf("0");
        printf("\n");
        
        for(i=0; i<n/2; i++)printf("1");
        for(; i<n; i++)printf("0");
        printf("\n");
    }else{
        for(i=0; i<n/2; i++)printf("1");
        printf("\n");
        
        for(i=0; i<pb; i++)printf("1");
        for(i=0; i<n - pb; i++)printf("0");
        printf("\n");
    
    }
    return 0;
}