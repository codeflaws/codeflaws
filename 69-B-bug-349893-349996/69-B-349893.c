#include<stdio.h>

#define NUM 100

typedef struct{
  int st;
  int go;
  int t;
  int c;
}runner;


int main(int argc, char *argv[]){
  int i,j,k,n,m;
  runner per[NUM],max;
  int profit=0,maximum,flg;

  scanf("%d %d",&m,&n);
  for(i=0;i<n;i++) 
    scanf("%d %d %d %d",&per[i].st,&per[i].go,&per[i].t,&per[i].c);
  for(i=1;i<=m;i++){
    maximum=0;
    flg=0;
    for(j=0;j<n;j++){
      if(i>=per[j].st && i<=per[j].go){
        if(flg==0){
          flg=1;
          max=per[j];
          maximum=max.c;
        }else if(max.t>per[j].t){
          max=per[j];
          maximum=max.c;
        }else if(max.t==per[j].t && max.c<per[j].c){
          max=per[j];
          maximum=max.c;
        }
      }
    }
    //printf("i=%d,maximum=%d\n",i,maximum);
    profit+=maximum;
  }
  printf("%d\n",profit);
  return 0;        
}

