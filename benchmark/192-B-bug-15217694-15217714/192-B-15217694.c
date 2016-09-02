#include <stdio.h>
int n,first,check,_min,y,x,res,i;
int main(int argc, char *argv[])
{
    scanf("%d%d",&n,&y);
    first = y;
    check =y;
    _min =y;
    for(i=1;i<n;i++){
        scanf("%d",&x);
        if(x>=y){
            check = x;
        }
        else check =y;
        if(check<_min) _min =check;
        y=x;
    }
    if(_min >x) res =x;
    else if(_min>first) res = x;
    else res =_min;


    printf("%d",res);


    return 0;
}
