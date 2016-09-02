#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    if(a==1 && b==0){
            printf("0 0 ");
    return 0;}
        if(b==0){
    printf("-1 -1 ");
    return 0; }
    char max[25000]; char min[25000]; char storage[25000];
    int k=0; int flag=0; int i;
    while(a){
    if(b<9){
    max[k++]=b+'0';
    b=0;
    a--;
    continue;
    }
    if(b!=0){
    max[k++]='9';
    b-=9;
    a--;
    continue;
    }
    max[k++]='0';
    }
    if(b!=0){
            printf("-1 -1");
    return 0;
    }
    strcpy(storage,max);
    if(storage[k-1]=='0'){
     storage[k-1]='1';
     flag = k-2;
     while(storage[flag]=='0')
        flag--;
     storage[flag]-=1;
    }
    printf("%s ",max);
    for(i=k-1;i>=0;i--){
            printf("%c",storage[i]);
    }
}
