#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   int i,n,cpt=1,a,tmp;
   fscanf(stdin,"%d %d",&n,&a);
   for(i=0;i<n;i++){
       fscanf(stdin,"%d",&tmp);
       if(a!=tmp){
           cpt++;   a=tmp;
       }
   }
   printf("%d",cpt);
   exit (0);
return 0;
}