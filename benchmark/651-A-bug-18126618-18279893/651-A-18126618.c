#include<stdio.h>
int main(int argc, char *argv[]){
    int a1,a2,c;
    scanf("%d%d",&a1,&a2);
    c=0;
    while(a1>=1&&a2>=1){
        c++;
        if(a1<=a2){
            a1=a1+1;
            a2=a2-2;
        }
        else
        {
            a1=a1-2;
            a2=a2+1;
        }
    }
    printf("%d",c);
    return 0;

}
