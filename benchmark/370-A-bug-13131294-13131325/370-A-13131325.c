#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
    int r1, c1, r2 ,c2 ,r, b=0, c, i, j, k;
    scanf("%d %d %d %d" ,&r1, &c1, &r2, &c2);
    i = abs(r1-r2);
    j = abs(c1-c2);
    if(i==j){
        b=1;
    }
    else if((i%2==0 && j%2==1) || (i%2==1 && j%2==0)){
        b=0;
    }
    else{
        b=2;
    }
    if(r1==r2 || c1==c2){
        r=1;
    }
    else{
        r=2;
    }
    if(i>j){
        k=i;
    }
    else{
        k=j;
    }
    printf("%d %d %d", r, b, k);




    return 0;
}
