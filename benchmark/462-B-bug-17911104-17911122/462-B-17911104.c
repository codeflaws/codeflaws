#include <stdio.h>
int main(int argc, char *argv[]){
    char n,k,i,j,abc[26]={0};
    long long x,res=0;
    char tarjeta[100000];
    scanf("%d%d",&n,&k);
    scanf("%s",tarjeta);
    for(i=0;i<n;i++)
        abc[tarjeta[i]-'A']++;
    while(k>0){
        j=0;
        for(i=0;i<26;i++){
            if(abc[i]>abc[j])
                j=i;
        }
        if(k<abc[j])
            x=k;
        else
            x=abc[j];
        res=res+x*x;
        k=k-abc[j];
        abc[j]=0;
    }
    printf("%lld",res);
    return 0;
}
