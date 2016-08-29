#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int z,i,n,k,m;
    scanf("%d",&k);
    scanf("%d",&m);
    n=m+k+1;
if(m==0){for(i=1;i<=n;i++){printf("%d%c",i,(i==n)?'\n':' ');}return 0;

}
if(k==0){for(i=n;i>=1;i--){printf("%d%c",i,(i==1)?'\n':' ');}return 0 ;}
if(k>=m){z=m;for(i=1;i<=n;i++){
    printf("%d ",i);
    if(z!=0){i+=z;z=0;}
}
for(i=1+m;i>=2;i--){printf("%d%c",i,(i==2)?'\n':' ');}
 }
 if(k<m){z=k;for(i=n;i>=1;i--){
    printf("%d ",i);
    if(z!=0){i-=z;z=0;}
}
for(i=2;i<=1+m;i++){printf("%d%c",i,(i==1+m)?'\n':' ');}
 }
    return 0;
}
