#include <stdio.h>
int n,s,i,j,x,y,res,_max,k;
int main(int argc, char *argv[])
{
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(s>x){

            res =(100- y)%100;
            k=1;
            if(res > _max) {

                _max = res;
            }
        }
        else if(s==x && y==0) k=1;
    }
    if(k==0) printf("-1");
    else  printf("%d",_max);


    return 0;
}
