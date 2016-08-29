
//http://codeforces.com/contest/569/problem/B

#include <stdio.h>
#include <stdlib.h>
    int a[1000001]={0};
    int list[100000]={0};
    int empty[100000]={0};
    int overlapped[100000]={0};

int main(int argc, char *argv[]){
    int i,j=0,k=0;
    int num,time;
    int temp;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&temp);
        list[i]=temp;
        if(a[temp]>0 || temp>=num){
            overlapped[j]=i;
            j++;
        }
        else{
            a[temp]++;
        }

    }


    for(i=1;i<=num;i++){
        if(a[i]==0){
            empty[k]=i;
            k++;
        }
    }
    time=j;
    for(i=0;i<time;i++){
        list[overlapped[i]]=empty[i];
    }
    for(i=0;i<num;i++){
        printf("%d ",list[i]);
    }
    printf("\n");
return 0;
}


