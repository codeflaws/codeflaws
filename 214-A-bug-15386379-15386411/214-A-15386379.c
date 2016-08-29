#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int a,b,n,m,p,k,count=0;
    scanf("%d %d",&n,&m);

    for(a=0;a<=n/2;a++){
        for(b=0; ;b++){
          p=powl(a,2);
          k=powl(b,2);

        if(p+b==n&&k+a==m){
            count++;
        }
        else if(p+b>n||k+a>m){
            break;
        }
        }
    }
    printf("%d\n",count);
return 0;
}
