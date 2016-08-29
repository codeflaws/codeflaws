#include <stdio.h>
int main(int argc, char *argv[])
{
	int x1, x2, x3, y1, y2, y3;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	if((x2-x1)*(y3-y2) == (x3-x2)*(y2-y1))
	 printf("TOWARDS\n");
    else if(y1 == y2)
     {
     	if(x1 < x2)
     	  {
  	        if(y3 > 0)
			   printf("LEFT\n");
			 else 
			  printf("RIGHT\n");	
  	      }
       else 
         {
            if(y3 > 0)
			   printf("RIGHT\n");
			 else 
			   printf("LEFT\n");
         }
     }
    else if(y2 > y1)
    {
   	  if(x3 > x2)
       printf("RIGHT\n");
     else 
       printf("LEFT\n");
     
    }
    else if(x3 > x2)
       printf("LEFT\n");
     else 
       printf("RIGHT\n");
    
  return 0;   
}