#include <stdlib.h>                                                             
#include <stdio.h>                                                              
#include <string.h>                                                             
#include <stdbool.h>                                                            
                                                                                
#define MIN(X,Y) (X < Y ? X : Y)                                                
#define MAX(X,Y) (X > Y ? X : Y)                                                
                                                                                
int main(int argc, char *argv[]){                                                                     
  int num_days, kg_meat = 0, spent = 0;                                         
  char buff[12];                                                                
  int ** jc_day_prices;                                                         
                                                                                
  num_days = atoi(fgets(buff, sizeof(buff), stdin));                            
                                                                                
  jc_day_prices = malloc(num_days * sizeof(int*));                              
                                                                                
  int i = 0;                                                                    
  for(i = 0; i < num_days; ++i) {                                               
    jc_day_prices[i] = malloc(2 * sizeof(int));                                 
    fgets(buff, sizeof(buff), stdin);                                           
    jc_day_prices[i][0] = atoi(strtok(buff, " "));                              
    jc_day_prices[i][1] = atoi(strtok(NULL, " "));                              
                                                                                
  }                                                                             
                                                                                
  for(i = 0; i < num_days; ++i) {                                               
    if(kg_meat < jc_day_prices[i][0]) {                                         
      spent += jc_day_prices[i][0] * jc_day_prices[i][1];                       
                                                                                
      int j = 1;                                                                
      while((i + j) < num_days && jc_day_prices[i][1] < jc_day_prices[i + j][1]) {
        kg_meat += jc_day_prices[i + j][0];                                     
        spent += jc_day_prices[i][1] * jc_day_prices[i + j][0];                 
        ++j;                                                                    
      }                                                                         
                                                                                
    }                                                                           
    else {                                                                      
      kg_meat -= jc_day_prices[i][0];                                           
    }                                                                           
  }                                                                             
                                                                                
  printf("%d", spent);                                                          
                                                                                
  for(i = 0; i < num_days; ++i) {                                               
    free(jc_day_prices[i]);                                                     
  }                                                                             
                                                                                
  return 0;                                                                     
}