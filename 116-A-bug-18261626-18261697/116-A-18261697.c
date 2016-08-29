#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,a,b,n,temp=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        //temp1=temp1-a+b;
        count=count+b-a;
       // printf("%d",count);
        if(count>temp)temp=count;

    }
    printf("%d",temp);
return 0;
}
