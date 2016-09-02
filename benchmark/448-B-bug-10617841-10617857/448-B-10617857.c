#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void manuString(char s[150],char t[150]){
     
    
     
     
     
     
      if(strstr(s,t)!=NULL){
           printf("automaton\n");
           return;         
     }
     
      
     
     
      int aux=0,i,j,ultimo=0,anteriorok=0;
      
      
      
      
       for(i=0;i<strlen(t);i++){
           for(j=ultimo;j<strlen(s);j++){
            if(t[i]==s[j]){
                           
             aux++;
             ultimo=j+1;              
            break;
            }                        
           } 
      }
      
      if(aux==strlen(t)){
           printf("automaton\n");
           return;         
     }
      
      
      aux=0;ultimo=0;anteriorok=0;
      
      for(i=0;i<strlen(t);i++){
           for(j=0;j<strlen(s);j++){
            if(t[i]==s[j]){
                           
             aux++;
             s[j]='-1';
             if(j<ultimo && anteriorok==0){
             anteriorok=1;
             }
             ultimo=j;              
            break;
            }                        
           } 
      }
      
      
      
      
      if(aux==strlen(t) && strlen(t)!=strlen(s) && anteriorok!=0){
        printf("both\n");
        return;                  
      }
      if(aux==strlen(t) && strlen(t)==strlen(s)){
        printf("array\n");
        return;                  
      }
     
           printf("need tree\n");
          
}


int main(int argc, char *argv[])
{

char s[150],t[150];

gets(s);
gets(t);

manuString(s,t);

    
  return 0;
}
