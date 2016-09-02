#include <stdio.h>
int main(int argc, char *argv[]){
  int x=0,diff,c,i,n,d=0,u=0;
  char a[210];
  scanf("%d",&n);
  scanf("%s",a);
  for(i=0;i<n;i++){
    if(a[i]=='x') d++;
    else if(a[i]=='X') u++;
  }
  i=0;
  if(d>u){  diff=d-u; 
  while(diff>0){
                         if(a[i]=='x'){  u++; d--; a[i]='X';  diff=d-u; x++;} i++;
}
  }
 else if(u>d){ diff=u-d; x=diff;
   while(diff>0){   
                        if(a[i]=='X') { a[i]='x'; d++; u--; diff=u-d; x++; } i++;
                    }}
    
  
  
  
  else {printf("0\n"); printf("%s",a);return 0; }
         printf("%d\n",x);
     printf("%s",a);
     return 0;
                  }
  
