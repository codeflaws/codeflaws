#include <stdio.h>
int main(int argc, char *argv[])
{
    int b,g,i,flag,bn[100000],gn[100000],bn1,gn1,temp;
    scanf("%d %d",&b,&g);
    for(i=0;i<b;i++){
        bn[i]=0;
    }
    for(i=0;i<g;i++){
        gn[i]=0;
    }
    scanf("%d",&bn1);
    int ara[100000];
    for(i=0;i<bn1;i++){
        scanf("%d",&ara[i]);
        bn[ara[i]]=1;
    }
    scanf("%d",&gn1);
    int str[100000];
    for(i=0;i<gn1;i++){
        scanf("%d",&str[i]);
        gn[str[i]]=1;
    }
    for(i=0;i<b*g;i++){
        if(bn[i%b]==1) gn[i%g]=1;
        if(gn[i%g]==1) bn[i%b]=1;
    }
    flag=1;
    for(i=0;i<b;i++){
        if(bn[i]==0){
            flag=0;
        }
    }
    if(flag){
        for(i=0;i<g;i++){
            if(gn[i]==0){
                flag=0;
            }
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    else printf("No\n");
return 0;
}
