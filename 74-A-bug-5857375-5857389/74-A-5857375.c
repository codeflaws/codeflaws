#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    char ans[21],name[21];
    int n,a,b,c,d,e,unsu,suc,maxp=0,sum;
    scanf("%d",&n);
    while(n--){
        scanf("%s%d%d%d%d%d%d%d",name,&suc,&unsu,&a,&b,&c,&d,&e);
        sum=suc*100-unsu*50+a+b+c+d+e;
        if(sum>maxp)
            strcpy(ans,name),maxp=sum;
    }
    printf("%s",ans);
   return 0;
}
