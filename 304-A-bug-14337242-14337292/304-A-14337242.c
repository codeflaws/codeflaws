#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int a,n,sum=0,i,j,x,y;
    double d;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=i;j<=n;j++){
                d = sqrt((i*i) + (j*j));
            if( (d*d)==(i*i + j*j) && d<=n)sum++;
        }
    }

    printf("%d",sum);
    return 0;
}
