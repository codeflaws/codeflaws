#include <stdio.h>

int main(int argc, char *argv[]){
   int flyes[2][3];
   int i,diffs=0;
   for(i = 0; i<3; i++)
      scanf("%d",&flyes[0][i]);
   for(i = 0; i<3; i++)
      scanf("%d",&flyes[1][i]);
   for(i = 0; i<3; i++){
      if(flyes[0][i]!=flyes[1][i])
	 diffs++;
   }
   if(diffs==1)
      printf("YES");
   else 
      printf("NO");

   return 0;
}

