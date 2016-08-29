#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[20000],i,j,k,n,s1=0,s2=0,f=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        k=(i*(i+1))/2;
        a[i]=k;
    }
    for(i=1;i<=n;i++){
        s1=s1+a[i];
        if(s1>=n){
            //j=i;
            break;



        }
        s2++;
    }
    printf("%d",s2);

return 0;
}
