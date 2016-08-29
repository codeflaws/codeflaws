#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int a1,a2,a3;
    int b1,b2,b3;
    int i;
    scanf("%d %d",&a1,&b1);
    scanf("%d %d",&a2,&b2);
    scanf("%d %d",&a3,&b3);

    if(a1>b1){
        i=b1;
        b1=a1;
        a1=i;
    }
    if(a2>b2){
        i=a2;
        a2=b2;
        b2=i;
    }
    if(a3>b3){
       i=a3;
       a3=b3;
       b3=i;
       }
    if(b2>b3){
        i=a2;
        a2=a3;
        a3=i;
        i=b2;
        b2=b3;
        b3=i;
    }
    if(a2*b2+a3*b3>a1*b1)
        printf("NO");
    else{
        if(b2>b1||b3>b1)
            printf("NO");
        else if(a2>a1||a3>a1)
            printf("NO");
        else if(b2+b3<=b1||a2+a3<=a1)
            printf("YES");
        else if(b3+a2<=b1)
            printf("YES");
        else if(a2+a3<=b1)
            printf("YES");
        else
            printf("NO");

    }

return 0;
}
