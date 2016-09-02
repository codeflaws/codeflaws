#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,a1,a2,temp,count=0;
   while (2==scanf("%d %d",&a1,&a2)){
    for (a1,a2;a2>=1;a1++,a2-=2){
        if(a1>a2){
            temp=a1;
            a1=a2;
            a2=temp;
        }
        count++;
        if(a1==0||a2==0){
            break ;
        }
    }
    printf("%d",count);
    return 0;
}
}