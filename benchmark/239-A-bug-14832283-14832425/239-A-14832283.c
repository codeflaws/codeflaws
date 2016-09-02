#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,a,b,f,i,g;
    scanf("%d %d %d",&n,&a,&b);
    if (a>b-n){
        printf("-1");
    }
    else if (n>=b){
        printf("-1");
    }
    else{

        g=b/a;
        f=n/a;
        if (a==1){
        for (i=1;i<=b-n;i++){
          printf("%d ",i);
}
}
else{
        for(i=f+1;i<=g;i++){
            printf("%d ",i*a-n);
        }
        
    }
}
    return 0;
}
