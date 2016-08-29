#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,a[1001],finish=0,turn=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    while(1){
        printf("finish %d turn %d\n",finish,turn);
        if(i==0){
            while(1){
                if(a[i]<=finish){
                    finish++;
                    a[i]=n+2;
                }
                if(i==n-1) break;
                i++;

            }
            turn++;
        }
        else if(i==n-1){
            while(1){
                if(a[i]<=finish){
                    finish++;
                    a[i]=n+2;
                }
                if(i==0) break;
                i--;
            }
            turn++;
        }
        if(finish==n) break;
    }
    printf("%d\n",turn);
    return 0;

}
