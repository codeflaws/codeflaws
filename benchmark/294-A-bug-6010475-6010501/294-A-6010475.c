#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int numOwires;
    scanf("%d",&numOwires);
    int i,density[numOwires];
    for(i=0;i<numOwires;i++){
        scanf("%d",&density[i]);
    }
    int temp=numOwires;
    scanf("%d",&numOwires);
    for(i=0;i<numOwires;i++){
        int num1,num2;
        scanf("%d %d",&num2,&num1);
            if(num2-1>0)
                density[num2-2]+=num1-1;
            if(num2<numOwires)
                density[num2]+=density[num2-1]-num1;

        density[num2-1]=0;
    }
    for(i=0;i<temp;i++){
        printf("%d\n",density[i]);
    }
    return 0;
}
