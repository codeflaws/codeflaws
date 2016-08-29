#include<stdio.h>
 
    int main(int argc, char *argv[])
    {
    	int A[100001] ;
    	int n,m;
    	scanf("%d",&n);
    	scanf("%d",&m);
    	int i;
    	for(i=0;i<n+1;++i)
    	  A[i] = 0;
    	 int flag = 0;
		 if(m== 0)
		   {
		   	printf("%d",n);
		   	return 0 ;
			} 
    	for(i=0;i<m;++i)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			
			if( b > a)
			{
				if(A[b] != 1)
				{
					A[b] = 2;
				}
				else 
				 flag =1;
				 
				if( A[a] != 2)
				  A[a] = 1;
				  
				 else 
				 flag = 1;  
			}
			else
			{
				if(A[a] != 1)
				{
					A[a] = 2;
				}
				else 
				 flag =1;
				 
				if( A[b] != 2)
				  A[b] = 1;
				  
				 else 
				 flag = 1; 
			}
			
		  }
		 //  printf("%d\n",flag);
		  if(flag == 1)
		    printf("0");
		    
		  else
		   { 
		     int flag1 = 0;
		   	for(i=1;i<n+1;++i)
		   	{   //printf("%d \n",A[i]);
		   		if( A[i] == 2 && flag1 == 0)
		   		    flag1 = 1;
		   		    
		   		    
		   		if(flag1 == 1 && A[i] == 1)
				    flag1 = 2;    
		   	 }
		   	 
		   	 //printf("%d\n",flag1);
		   	 if(flag1 == 2)
		   	  printf("0");
		   	  
		   	  else
		   	  {
		   	  	int count1=0,count2=0;
		   	  	for(i=1;i<n+1;++i)
		   	  	{
		   	  		if(A[i]  == 1)
		   	  		     count1 = i;
		   	  	    if(A[i] == 2 && count2 == 0)
					{
						count2 = i;
						break;
							   }		   
		   	  	 }
				 //printf("%d %d ",count2,count1);	 
				 printf("%d",count2 - count1 );	 
				 }
			 }  
			 
			 return 0;
		    
	}