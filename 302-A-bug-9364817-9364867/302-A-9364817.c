#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
    int n,m,i,s=0,t=0,a,b,result;
    int *x;
    scanf("%d%d",&n,&m);
    x=malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i]==1){
            s++;
        }
        else{
            t++;
        }
    }
    for(i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        if((a-b)%2 && ((int)fabs(a-b)<=s||(int)fabs(a-b)<=t)){
            result=1;
        }
        else{
            result=0;
        }
        printf("%d\n",result);
    }
   return 0;
}
