#include <stdio.h>
int main(int argc, char *argv[])
{
    int i,n,r1,r2,c1,c2,d1,d2,x[10];
    scanf("%d %d %d %d %d %d",&r1,&r2,&c1,&c2,&d1,&d2);
    x[1]=((c1+d1)-r2)/2;
    x[3]=c1-x[1];
    x[4]=d1-x[1];
    x[2]=c2-x[4];
    for(n=1;n<4;n++) {
        for(i=n+1;i<=4;i++) {
            if(x[n]==x[i]) {
                printf("-1\n");
                return 0;
            }
        }
    }
    printf("%d %d\n",x[1],x[2]);
    printf("%d %d\n",x[3],x[4]);
    return 0;
}
