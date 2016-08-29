#include <stdio.h>
int main(int argc, char *argv[])
{
    int i,j,n,l,f,a,b,count=0;
    scanf("%d %d %d %d",&l,&f,&a,&b);
    for(i=l;i<=l*f;i=i+l) {
        if(i%f==0) {
            count=i;
            break;
        }
    }
    n=b/count-a/count;
    printf("%d\n",n);
    return 0;
}
