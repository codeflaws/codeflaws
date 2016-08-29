#include <stdio.h>

int main(int argc, char *argv[]) 
{
  int n,i,t,j; 
  char s, q[51]; 
  scanf("%d %d", &n, &t); 
  scanf("%s", q);

  for(j=t;j>=0;j--) 
  {  
	  for(i=1;i<n;i++)
	  {
           if(q[i]=='G' && q[i-1]=='B')
		   { 
			   s=q[i];
			   q[i]=q[i-1];
			   q[i-1]=s;
			   i++;
		   }
	  }
  }

  printf("%s", q); 
  return 0; 
}