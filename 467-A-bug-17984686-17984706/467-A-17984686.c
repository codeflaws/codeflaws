#include<stdio.h>
int main(int argc, char *argv[]){
int a,p,q;
int count=0;
scanf("%d",&a);
while(a--){
    scanf("%d %d",&p,&q);
    if(p-q>=2)
        count++;

}
printf("%d",count);
return 0;
}
