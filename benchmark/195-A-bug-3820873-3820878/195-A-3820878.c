#include<stdio.h>
int main(int argc, char *argv[]){
int a,b,c,t;
scanf("%d%d%d",&a,&b,&c);
for(t=0; ;t++)
    if((t*b+c*b)>=a*c){
            break;
    }
printf("%d",t);
return 0;
}
