#include <stdio.h>
#include <math.h>
int n,i,j,max,k,delta;
int map[10000];

void print(){
    int j;
    for(j=0;j<k;j++) printf("%d ",map[j]); printf("\n");
}
int main(int argc, char *argv[]){
    scanf("%d",&n);
    for(k=n;k>=0;k--) if((k*(k+1))/2<=n) break;
    printf("%d\n",k+1);
    max=k;
    for(i=0;i<k;i++) map[i]=i+1;
    print();
    for(i=0;i<k;i++){
        for(j=0;j<i;j++) map[j]++;
        delta=max+1-map[i+1];
        for(j=i+1;j<k;j++){
            map[j]+=delta;
        }
        max=map[k-1];

        print();
    }
    return 0;
}