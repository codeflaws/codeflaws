#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,h,f[1000],i,j,count;
    while(scanf("%d%d",&n,&h)){
        count=0;
        for(i=0;i<n;i++){
            scanf("%d",&f[i]);
            if(f[i]>h){
                count=count+2;
            }
            else{
                count++;
            }
        }
        printf("%d\n",count);
    }
    
    return 0;
}