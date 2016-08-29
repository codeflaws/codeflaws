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
    i = 0;
    scanf("%d", a[i]);
    max = a[i];
    mai = i;
    min = a[i];
    mii = i;
    for(i = 1;i < n;i++){
        scanf("%d", &a[i]);
            if(max < a[i]){
                max = a[i];
                mai = i;
            }
            if(min >= a[i]){
                min = a[i];
                mii = i;
            }
    }
    if(a[0] == max)
        mai = 0;
    n = n - 1;
    if(a[n] == min)
        mii = n;

    dis = mai;
    if(mai < mii){
        dis = dis + (n - mii);
    }
    else
        dis = dis + (n - (mii + 1));
    printf("%d", dis);
return 0;
}


