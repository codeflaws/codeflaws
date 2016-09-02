#include <stdio.h>]
#include <stdlib.h>
typedef struct{
   int a;
   int b;
}d;
d card[1001];
int cmp(const void *m,const void *n){
    if ((*(d*)m).b>(*(d*)n).b)
        return -1;
     if ((*(d*)m).b==(*(d*)n).b){
         if ((*(d*)m).a>(*(d*)n).b)
            return -1;
         else
            return 1;
     }
     return 1;
}
int main(int argc, char *argv[]){
    int n,i,counter=1,point=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&card[i].a,&card[i].b);
    qsort(card,n,sizeof(card[0]),cmp);
    i=0;
    while(counter&&i<n){
        point+=card[i].a;
        counter+=card[i].b;
        i++;
        counter--;
    }
  printf("%d",point);
   return 0;
}
