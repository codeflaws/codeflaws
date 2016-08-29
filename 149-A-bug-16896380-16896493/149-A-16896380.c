#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,ara[12],i,j,temp,sum=0,cont=0;
    scanf("%d",&n);
    for(i=0;i<12;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<11;i++){
        for(j=0;j<11-i;j++){
            if(ara[j]<ara[j+1]){
               temp=ara[j];
               ara[j]=ara[j+1];
               ara[j+1]=temp;
            }
        }
    }
    for(i=0;i<12;i++){
        sum+=ara[i];
        cont++;
        if(sum==n||sum>n){
            break;
        }
    }
    if(sum>n||sum==n){
        printf("%d",cont);
    }
    else if(sum<n)printf("-1");
return 0;
}
