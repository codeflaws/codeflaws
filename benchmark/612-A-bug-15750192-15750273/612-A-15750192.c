#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int k,p,q,i,j,l=0,t=0,c=0;
	scanf("%d%d%d",&k,&p,&q);
	char a[100];
	scanf("%s",&a);
	if(k==p+q)
	{
		
		printf("2\n");
		for(i=0;i<p;i++)
		{
			printf("%c",a[i]);
		}
		printf("\n");
		for(i=p;i<=k;i++)
		{
			printf("%c",a[i]);
		}
	}
	else if(k%p==0)
	{
		printf("%d\n",k/p);
		for(i=0;i<k/p;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("%c",a[j+l]);
			}
			printf("\n");
		    l=l+p;
		}
	}
	else if(k%q==0)
	{
		printf("%d\n",k/q);
		for(i=0;i<k/q;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%c",a[j+l]);
			}
			printf("\n");
		    l=l+q;
		}
	}
	else if((k!=p+q)||(k%p!=0)||(k%q!=0))
    {
	    for(i=0;i<k/2+1;i++)
    	{
    		c++;
    	    if((k-p*(i+1))%q==0&&(k-p*(i+1))>=0)
        	{
			t=1;
        	break;
	        }
		} 
		
	    if(t==1)
       	{
       		printf("%d\n",c+(k-c*p)/q);
	    	for(i=0;i<c;i++)
	    	{
		    	for(j=0;j<p;j++)
			    {
				printf("%c",a[j+l]);
		     	}
			printf("\n");
			l=l+p;
	    	}
	    	for(i=0;i<(k-c*p)/q;i++)
	    	{
		    	for(j=0;j<q;j++)
		    	{
		   		printf("%c",a[j+l]);
		    	}
			printf("\n");
			l=l+q;
		    }
	   }
	else if(t==0)
	printf("-1");
    }
	
	return 0;
}