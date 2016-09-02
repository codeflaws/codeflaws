#include<stdio.h>

int chess(char a[][9]);

int main(int argc, char *argv[])
{
  char a[8][9];
  int i;
    
  for(i=0;i<8;i++)
    scanf("%s",a[i]);
    
    
  i = chess(a);
  
  printf("%d",i);
  
  return 0;
    
}


int chess(char a[8][9])
{
  int i,j,count,countB;
  
  count=countB=0;
  
  for(i=0;i<8;i++)
    {
     if(a[i][0]=='B')
       {
        for(j=0;j<8;j++)
          {
           if(a[i][j]=='w')
             
              break; 
                
          }
          
        if(j==8)
          count++;
           
       }
        
    }
    

  for(j=0;j<8;j++)
    {
     if(a[0][j]=='B')
       {
         for(i=0;i<8;i++)
           {
            if(a[i][j]=='W')
              break;
               
           }
           
         if(i==8)
           countB++;
           
       }
       
    }
    
    
    if(countB<8)
     count+=countB;
     
    
   return count;

}
