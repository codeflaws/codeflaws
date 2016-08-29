#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int number;
  int value;
  int xor;
} node;

//int comp(const void *p1,const void *p2);
void RouteDetect(int pos);

int count=0,*start,*goal;
node *vertex;

int main(int argc, char *argv[]){
  int n,i,j;
  
  scanf("%d",&n);
  vertex=(node *)calloc(n,sizeof(node));
  start=(int *)calloc(n,sizeof(int));
  goal=(int *)calloc(n,sizeof(int));
  for(i=0;i<n;i++){
    vertex[i].number=i;
    scanf("%d%d",&vertex[i].value,&vertex[i].xor);
  }

  //qsort(vertex,n,sizeof(node),comp);
  /*for(i=0;i<n;i++){
    printf("%d %d %d\n",vertex[i].number,vertex[i].value,vertex[i].xor);
    }//*/
  for(i=0;i<n;i++)
    if(vertex[i].value==1) RouteDetect(i);

  printf("%d\n",count);
  for(i=0;i<count;i++) printf("%d %d\n",start[i],goal[i]);

  free(vertex);
  free(start);
  free(goal);
  return 0;
}
/*
int comp(const void *p1,const void *p2){
  const node *n1,*n2;
  n1= (const node *)p1;
  n2= (const node *)p2;
  if(n1->value == n2->value) return n1->number-n2->number;
  else return n1->value-n2->value;
  }//*/
  
void RouteDetect(int pos){
  int tmp;

  if(vertex[pos].value==1){
    vertex[pos].value--;
    tmp=vertex[pos].xor;
    printf("%d ^ %d = %d\n", vertex[pos].xor,vertex[pos].number,tmp);
    vertex[tmp].value--;
    vertex[tmp].xor^=vertex[pos].number;
    start[count]=pos;
    goal[count]=tmp;
    count++;
    RouteDetect(tmp);
  }
}
    
    
    
    
  
