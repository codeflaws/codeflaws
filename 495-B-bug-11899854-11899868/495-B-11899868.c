#include<stdio.h>

int main(int argc, char *argv[])
{
    int a,b,count=0,i,c;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("infinity");
        return 0;
    }
    else{
        c=a-b;
        for(i=1;i*i<=c;i++){
            if(c%i==0&&a%i==b){
            count++;
            //printf("%d %d\n",i,c/i);
            }
            if(i!=(c/i))
            if(c%(c/i)==0&&a%(c/i)==b){
            count++;
            //printf("%d %d\n",i,c/i);
            }
        }
    }
    printf("%d",count);
    return 0;
}
