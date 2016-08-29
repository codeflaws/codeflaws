#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,Pi,Qi,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&Pi,&Qi);
        if(Pi+2<Qi)count++;
    }
    printf("%d",count);
return 0;
}
