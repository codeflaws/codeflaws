//......................
//.......GamesMan.......
//......................

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n,i,max,min,mai,mii,dis=0;
    scanf("%d", &n);
    int a[n];
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
        if(i == 0){
            max = a[i];
            mai = i;
            min = a[i];
            mii = i;
        }
        else{
            if(max <= a[i]){
                max = a[i];
                mai = i;
            }
            if(min >= a[i]){
                min = a[i];
                mii = i;
            }
        }
    }
    if(a[0] == max)
        mai = 0;
    if(a[n-1] == min)
        mii = n-1;

    dis = mai;
    if(mai < mii){
        dis = dis + (n-1 - mii);
    }
    else
        dis = dis + (n-1 - (mii + 1));
    printf("%d", dis);
return 0;
}


