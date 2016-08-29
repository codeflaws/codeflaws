#include <stdio.h>

int array[100005];
int cnt=2, max=2;

void checker(int array[],int i)
{
    if(array[i]==array[i-1]+array[i-2]){
        cnt++;
    }
    else{
    if(cnt>max)
        max=cnt;
        cnt=2;
    }
    return;
}

int main(int argc, char *argv[])
{
    int N,i;
    scanf("%d",&N);

    if(N==1 || N==2){
        printf("%d",N);
        return 0;
    }

    for(i=0;i<N;i++)
        scanf("%d",&array[i]);

    for(i=2;i<N;i++){
        checker(array,i);
    }

    printf("%d",max);

    return 0;
}
