#include<stdio.h>
#include<string.h>


void fun(char *str,int save,int flag[26],int k)
{
      int counta = 0,p = 0,i,j;
      
      i = 0,j = strlen(str)-1;
      
      while(i<=j)
        {
          if(str[i]=='?' && str[j]=='?')
             {
                if(counta < save)
                   {
                      str[i] = 'a' , str[j] = 'a';
                
                      if(i==j)
                         counta++;
                         
                      else
                         counta += 2;
                                
                   }
             
                else
                   {
                      for(;p<k;p++)
                         {
                           if(!flag[p])
                              {
                                 flag[p] = 1;
                                 break;  
                              } 
                               
                         }
                         
                      str[i] = p+97 , str[j] = p+97;
                   
                   }
                
             }
             
             i++,j--;
               
        }
        
     return ;   
}



int main(int argc, char *argv[])
{
   char str[101];
   int flag[26] = {0},i,j,n,p,k;
   int qmarks = 0,rem = 0,fill;        //number of qmarks and number of remaining letters after 2nd step
   
   scanf("%d %s",&k,str);

   //check for palindrome
   
   n = strlen(str);
   
   i = 0,j = n-1;
   
   while(i<=j)
     {
        if(str[i]=='?' || str[j]=='?')
           {
              i++,j--;   
           }
           
           
        else if(str[i]==str[j])
           {
                i++,j--;
           }
           
        else
             break;
             
     }
     
   if(i<=j)
     {
       printf("IMPOSSIBLE");
       return 0;
     }

  //fill as per palindrome
  
  i = 0,j = n-1;
  
  while(i<=j)
     {
        if(str[i]=='?' || str[j]=='?')
          {
            if(str[i]=='?')
               str[i] = str[j];
               
            else
               str[j] = str[i];
                 
          }
          
        i++,j--;
        
     }  
     
  //check number of qmarks and remaining
  i = 0;
  
  while(str[i])
     {
       if(str[i]=='?')
            qmarks++;
          
       else if(!flag[str[i]-97])
               flag[str[i]-97] = 1;
             
         i++;
         
     }

  for(i=0;i<26;i++)
     {
        if(!flag[i])
           rem++;
     }
     
  if(!qmarks && !rem)
   {
     printf("%s",str);
     return 0;   
   }
   
  else if(!qmarks)
   { 
     printf("IMPOSSIBLE");
     return 0;

   }
   
   
  else
      {
        if(!(qmarks%2))
           {
             if(qmarks < 2*rem)
               { 
                 printf("IMPOSSIBLE");
                 return 0;
               }
               
             else
                {
                  if(!rem)
                      fill = 0;
                      
                   else
                      fill = 2*rem;
                      
                   fun(str,qmarks-fill,flag,k);  
                
                } 
                 
           } 
             
             
        else
           {
             if(qmarks < 2*rem-1)
                {
                   printf("IMPOSSIBLE");
                   return 0;
                }  
                
             else
                {
                  if(!rem)
                      fill = 0;
                      
                   else
                      fill = 2*rem-1;
                      
                   fun(str,qmarks-fill,flag,k);
                    
                }
                
           }
           
      }
 
  printf("%s",str);
  return 0;     
      
}
