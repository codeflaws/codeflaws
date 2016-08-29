#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int i,l1,l2,a[1001],b[1001],z,ind1=-1,ind2=-1;
	char s1[1000001],s2[1000001],c;
	
	scanf("%s%s",s1,s2);
	
	l1=strlen(s1);
	l2=strlen(s2);
	
	
	if(l1!=l2)
	{
		printf("NO");
		goto label;
	}

	
	
	else if(l1==1&&l2==1)
	{
		   printf("NO");
		   goto label;
	}
	
	
	
	
	else
	{				
		for(i=0;i<l1;i++)
		{
			if(s1[i]!=s2[i])
			{
				
				if(ind2==0)
				{
					ind2=i;
					
					printf("ind1=%d ind2=%d",ind1,ind2);
					
					c=s1[ind1];
					s1[ind1]=s1[ind2];
					s1[ind2]=c;
					
					z=strcmp(s1,s2);
					
					if(z==0)
					{
						printf("YES");
						goto label;
					}
					
					else 
					{
						printf("NO");
						goto label;
					}
					
				}
				
				if(ind1==-1)
				{
					ind1=i;
					ind2=0;
					
				}
			
				
			}
		}

		
	}
	
	printf("NO");
	
	label:
	return 0;
}