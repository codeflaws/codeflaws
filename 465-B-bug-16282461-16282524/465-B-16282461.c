#include <stdlib.h>                                                             
#include <stdio.h>                                                              
#include <string.h>                                                             
#include <stdbool.h>                                                            
                                                                                
#define MIN(X,Y) (X < Y ? X : Y)                                                
#define MAX(X,Y) (X > Y ? X : Y)                                                
                                                                                
int compare(const void * a, const void * b) {                                   
  return ( *(int*)a - *(int*)b );                                               
}                                                                               
                                                                                
int main(int argc, char *argv[]){                                                                     
  int letters;                                                                  
  int current_letter, actions = 0;                                              
  bool inside_letter = false;                                                   
  char buffer [2048];                                                           
                                                                                
  letters = atoi(fgets(buffer, sizeof(buffer), stdin));                         
                                                                                
  fgets(buffer, sizeof(buffer), stdin);                                         
                                                                                
  current_letter = atoi(strtok(buffer, " "));                                   
  if(current_letter) {                                                          
    ++actions;                                                                  
    inside_letter = true;                                                       
  }                                                                             
                                                                                
  int i;                                                                        
  for(i = 1; i < letters; ++i) {                                                
    current_letter = atoi(strtok(NULL, " "));                                   
    if(current_letter && !inside_letter && actions != 0) {                      
      actions += 2;                                                             
    }                                                                           
    else if(current_letter) {                                                   
      ++actions;                                                                
    }                                                                           
    else {                                                                      
      inside_letter = false;                                                    
    }                                                                           
  }                                                                             
                                                                                
  printf("%d", actions);                                                        
                                                                                
  return 0;                                                                     
}