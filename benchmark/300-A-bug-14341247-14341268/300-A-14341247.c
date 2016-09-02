#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i,element,x=0,y=0,z=0;
    scanf("%d",&n);
    int ara[n];
    int bra[n];
    int cra[n];
    for(i=0;i<n;i++){
        scanf("%d",&element);
        if(element<0){
            ara[x]=element;
            x++;
        }
       else if(element>0){
            bra[y]=element;
            y++;
        }
        else{
            cra[z]=element;
            z++;
        }
    }
    printf("1 %d\n",ara[0]);
    if((x-1)%2==0){
        printf("%d ",(x-1+y));
        for(i=1;i<x;i++){
            printf("%d ",ara[i]);
        }
        for(i=0;i<y;i++){
            printf("%d ",bra[i]);
        }
        printf("\n");
        printf("%d ",z);
        for(i=0;i<z;i++){
            printf("%d ",cra[i]);
        }

    }
    else{
        printf("%d ",(x-2+y));
        for(i=1;i<x-1;i++){
            printf("%d ",ara[i]);
        }
        for(i=0;i<y;i++){
            printf("%d ",bra[i]);
        }
        printf("\n");
        printf("%d %d",z+1,ara[x-1]);
        for(i=0;i<z;i++){
            printf("%d ",cra[i]);
        }

    }
    return 0;
}
