#include <stdio.h>
#include <math.h>
int is_prime(int number){
    if(number==0||number==1||number<0)return 0;
    else if(number==2||number==3||number==5)return 1;
    else{
        int root,i;
        root=sqrt(number);
        for(i=2;i<=root;i++){
            if((number%i)==0)return 0;
        }
        return 1;
    }
    return 0;
}
void brute_force(int* data,int _sz){
    int i,j,tmp;
    for(i=0;i<_sz;i++){
        for(j=i+1;j<_sz;j++){
            tmp=data[i]+data[j];
            if(is_prime(tmp)==1){
                printf("%d\n%d %d\n",2,data[i],data[j]);
                return;
            }
        }
    }
    for(i=0;i<_sz;i++){
        if(is_prime(data[i])==1){
            printf("%d\n%d\n",1,data[i]);
            return;
        }
    }
    printf("%d",0);
    return;
}
int main(int argc, char *argv[]){
    int n,i,ones=0,tmp;
    scanf("%d",&n);
    int* data=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",data+i);
        if(data[i]==1)ones++;
    }
    if(ones>1){
        for(i=0;i<n;i++){
            tmp=data[i]+1;
            if(is_prime(tmp)==1&&tmp!=2){
                printf("%d\n",ones+1);
                for(i=0;i<ones;i++)printf("%d ",1);
                printf("%d\n",tmp-1);
                return 0;
            }
        }
        printf("%d\n",ones);
        for(i=0;i<ones;i++){
            printf("%d ",1);
        }
        return 0;
    }
    else{
        brute_force(data,n);
        return 0;
    }
}
