#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	
	
int a,b,c,q,w,e,i,j,k,l,temp=0;
char arr[101];
scanf("%s",arr);


 l=strlen(arr);

if(l>2){
	for(i=l-1;i>=0;i--)
	{
	    for(j=i-1;j>=0;j--)
	    {
	        for (k=j-1;k>=0;k--)
	        {
	            w=(arr[i]-48) + ((arr[j]-48)*10) +((arr[k]-48)*100);
	           if(w%8==0){temp=1; break;}
	            else temp=0;
	          	
	
	        }
	        if(temp==1)break;
	    }
	    if(temp==1)break;
	    
	    
	}

            if(temp==1){ printf("YES\n");
            if(w!=0)	for(i=0;i<k;i++)printf("%c",arr[i]);
            	
            	printf("%d",w);}
            	
            	
 if (temp==0)
    {
       for(i=l-1;i>=0;i--)
	{
	    for(j=i-1;j>=0;j--)
	    {
	        
	            w=(arr[i]-48) + ((arr[j]-48)*10) ;
	           if(w%8==0){temp=1; break;}
	            else temp=0;
	          	
	
	        }	        if(temp==1)break;
	    }
	   
	    
	    
	

            if(temp==1){ printf("YES\n");
           
            	
            	printf("%d",w);} 
        
    }

    if (temp==0)
    {
       for(i=l-1;i>=0;i--)
	{
	   
	        
	            w=(arr[i]-48)   ;
	           if(w%8==0){temp=1; break;}
	            else temp=0;
	          	
	 if(temp==1)break;
	        
	    }
	 
	    
	    
	

            if(temp==1){
                printf("YES\n");
            
            	
            	printf("%d",w);} 
        
        
    }
    
   if(temp==0)printf("NO"); 
    
}

l=strlen(arr);
if(l==2)
{w=(arr[0]-48)*10+arr[1]-48;
    
    if(w%8==0)printf("YES\n%d",w);
    else {
        
        if(arr[0]=='0')printf("YES\n0");
        else if(arr[0]=='8')printf("YES\n8");
         else   if(arr[1]=='8')printf("YES\n8");
          else  if(arr[1]=='0')printf("YES\n0");   else printf("NO");
    }
}

l=strlen(arr);
if(l==1){
 if(arr[0]=='0')printf("YES\n0");
         else if(arr[0]=='8')printf("YES\n8");
	else printf("NO");}
	return 0;
}

