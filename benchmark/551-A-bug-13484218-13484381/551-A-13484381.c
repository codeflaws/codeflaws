#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
     int* students;
     int N,i,Max,j,k=0;
     scanf("%d",&N);
     students=(int*)malloc(sizeof(int)*N);
     for(i=0;i<N;i++){
                             scanf("%d",(students+i));
                             }
     
     for(i=0;i<N;i++){
                      Max=*(students+i);
                             for(j=0;j<N;j++){
                                                     if(Max <*(students+j))
                                                     k++;
                                                     }                      
                             printf("%d ",1+k);
                             k=0;
                             }
     return 0;
     }                                                
                             
