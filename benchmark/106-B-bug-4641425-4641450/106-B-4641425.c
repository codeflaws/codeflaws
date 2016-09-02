#include <stdio.h>
//#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[]){
    int n,i,j,x=0,min=1000,mi;
    scanf("%d",&n);
    int oudated[n],speed[n],ram[n],hdd[n],cost[n];
    for(i=0;i<n;i++)
        scanf("%d %d %d %d",&speed[i],&ram[i],&hdd[i],&cost[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(speed[i]<speed[j]&&ram[i]<ram[j]&&hdd[i]<hdd[j]){
                cost[i]=10000;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        if(cost[i]<min){
            min=cost[i];
            mi=i;
        }
    }
    printf("%d",mi+1);
    return 0;
}
