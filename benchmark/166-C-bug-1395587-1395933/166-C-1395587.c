#include<stdio.h>
#include<stdlib.h>

int comp(const void *p1, const void *p2) {
  int n1, n2;
  n1 = *((const int *)p1);
  n2 = *((const int *)p2);
  return n1 - n2;
}

int main(int argc, char *argv[]){
  int *array;
  int i,j,k,n,x;
  int first,last,flg,num;
  scanf("%d %d",&n,&x);
  array=(int *)calloc(n,sizeof(int));
  for(i=0;i<n;i++) scanf("%d",array+i);
  qsort(array,n,sizeof(int),comp);
  
  flg=0;
  for(first=0;first<n;first++){
    if(array[first]==x){
      flg=1;
      break;
    }else if(array[first]>x){
      first--;
      break;
    }
  }
  first++;

  for(last=n-1;last>=0;last--){
    if(array[last]==x){
      flg=1;
      break;
    }else if(array[last]<x){
      last++;
      break;
    }
  }
  if(last==-1) last++;
  last++;

  if(flg){
    if(array[(n+1)/2]==x) printf("0\n");
    else if(last<(n+1)/2) printf("%d\n",n-2*last);
    else if(first>(n+1)/2) printf("%d\n",2*first-n-1);
  }else{
    k=last;
    if(k==(n+1)/2) printf("1\n");
    else if(k>(n+1)/2) printf("%d\n",2*k-n-1);
    else printf("%d\n",n+2-2*k);
  }
  free(array);
  return 0;
}
