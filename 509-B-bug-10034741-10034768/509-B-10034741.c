#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int colours,pebbles[200],x=1,piles,i,maximum=0,minimum=200;
 scanf("%d %d",&piles,&colours);
 for(i=0;i<piles;i++){
 scanf("%d",&pebbles[i]);
 if (pebbles[i]>maximum){
    maximum=pebbles[i];
 }
 if(pebbles[i]<minimum){
    minimum=pebbles[i];
 }
 }
 if ((maximum-minimum)>colours){
    printf("NO");
 }
 else{
     printf("YES\n");
for(i=0;i<piles;i++){
 x=1;
 while(pebbles[i]!=0){
    printf("%d ",x);
    if(x<=colours){
        x++;
    }
    if(x>colours){
        x=1;
    }
    pebbles[i]--;
 }
 printf("\n");
 }
 return 0;
}
}
