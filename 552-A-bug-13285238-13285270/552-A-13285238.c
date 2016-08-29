#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
    int n,i,x1,y1,x2,y2,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        sum+=(fabs(x1-y2)+1)*(fabs(y1-x2)+1);
        
        
    }
    
    printf("%d",sum);
    
    return 0;
}