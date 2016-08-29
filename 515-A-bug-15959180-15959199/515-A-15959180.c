#include <stdlib.h>                                                             
#include <stdio.h>                                                              
#include <string.h>                                                             
#include <stdbool.h>                                                            
                                                                                
#define MIN(X,Y) (X < Y ? X : Y)                                                
#define MAX(X,Y) (X > Y ? X : Y)                                                
                                                                                
int main(int argc, char *argv[]){                                                                     
  int x, y, steps, leftover_steps;                                              
  char buffer[256];                                                             
                                                                                
  fgets(buffer, sizeof(buffer), stdin);                                         
                                                                                
  x = atoi(strtok(buffer, " "));                                                
  y = atoi(strtok(NULL, " "));                                                  
  steps = atoi(strtok(NULL, " "));                                              
                                                                                
  leftover_steps = steps - (x + y);                                             
                                                                                
  if(leftover_steps < 0 || leftover_steps % 2 == 1) {                           
    printf("No");                                                               
  }                                                                             
  else {                                                                        
    printf("Yes");                                                              
  }                                                                             
                                                                                
                                                                                
  return 0;                                                                     
}