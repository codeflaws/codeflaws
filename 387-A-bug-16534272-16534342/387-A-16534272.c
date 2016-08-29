#include <stdio.h>

int main(int argc, char *argv[]){
char hora;
int i,j,k,a,b,c,f;
scanf("%d%c%d",&i,&hora,&j);
scanf("%d%c%d",&a,&hora,&b);
k=(i-a);


c=(j-b);
if(c<0 && k<=0){k=23+k; c=60+c;}else{
if((i-a)<0 ){k=24+k;}}

printf("%02d:%02d",k,c);


return 0;
}
