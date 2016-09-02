#include <stdio.h>
#include <stdlib.h>

typedef struct {
 int beg;
 int end;
}ar;

int func(const void* a, const void* b){
  return ( ( ((ar*)a)->beg < ((ar*)b)->beg ) 
		  ? (-1) : 
		   (( ((ar*)a)->beg > ((ar*)b)->beg )? 1 : 0));
}

ar *dat; int n,i,t,j,k;

int main(int argc, char *argv[]){
  scanf("%d", &n);
  dat=(ar*)malloc(sizeof(ar)*n);
  for(i=0; i<n; i++){
   scanf("%d", &t);
   dat[i].beg=t;
   scanf("%d", &t);
   dat[i].end=t;
  }
  qsort(dat,n,sizeof(ar), &func);
  /*
  for(i=0; i<n; i++){
   printf("%d %d\n", dat[i].beg, dat[i].end);
  }*/
  j=0;
  for(i=0; i<n; i++){
   if(dat[i].end<j){
	   k++;
   } else {
	   j=dat[i].end;
   }
  }
  printf("%d", k);
}
