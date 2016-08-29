#include <stdio.h>
#define min(a,b) (a)<(b) ? a:b
int main(int argc, char *argv[]){
    int n,maxR=0,maxL=0,minR,minL,i;
    char c;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       scanf(" %c",&c);
       if(c=='R'){
          maxR=i;
          minR=min(i,minR);
       }
       else if(c=='L'){
         maxL=i;
         minL=min(i,minL);
       }
   }
   if(!maxR)
    printf("%d %d",maxL,minL-1);
   else if(!maxL)
      printf("%d %d",minR,maxR+1);
   else printf("%d %d",maxL,maxR);
   return 0;
}
