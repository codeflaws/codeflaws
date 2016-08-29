#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i,j,k,l1,l2,d,count=0,a,b;
	char t[102],s[102],p[102],q[102],v[102];
	scanf("%s",t);
	scanf("%s",s);
	l1=strlen(t);
	l2=strlen(s);
	if(l1<l2)
	printf("need tree");
	if(l1==l2)
	{ 
	i=j=0;
		while(i<l1)
		{
			a=(int)t[i];
			for(j=0;j<l2;j++)
			{b=(int)s[j];
			if(a==b)
			{
				count++;
				t[i]='.';
				s[j]='.';
				break;
			}
			
			}
			i++;
		}
		printf("%s %s",t,s);
		if(count==l1)
		printf("array");
		else
		printf("need tree");
	}
	if(l1>l2)
	{
		i=j=0;
        k=-1;
	while(1)
	{a=(int)t[i];
	 b=(int)s[j];
		if(a==b)
		{
			p[++k]=s[j];
			j++;
		}
		if(i==l1||j==l2||k==l2-1)
		break;
		i++;
	}
	if(k==l2-1)
	{
	    printf("automaton\n");
	}
	else
	{
	   	i=j=0;
	   	k=-1;
	   	while(i<l1)
	   	{
	   	   a=(int)t[i];
	   	   for(j=0;j<l2;j++)
	   	   {
	   	   	  b=(int)s[j];
	   	   	  if(a==b)
	   	   	  {
	   	   	  	count++;
	   	   	  	t[i]='.';
	   	   	  	s[j]='.';
	          }
           }
           i++;
        }
        if(count==l2)
        printf("both");
        else 
        printf("need tree");
	}
	}
	return 0;
}