/*///////////////////////////
  ++++++++  Written By Boddapati Mahesh
  --------  IIIT Hyderabad
  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main(int argc, char *argv[])
{
	int t=1;
	/*scanf("%d",&t);*/
	int index,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,u,v,w,x,y,z;
	char a[10]={};
	int b[10]={},count[10]={};
	char c[8][20]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",a);
		x=0;
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]!='.')	
			{
				b[x++]=i;
			}
		}
		for(i=0;i<x;i++)
		{
			for(j=0;j<8;j++)
			{
				if(c[j][b[i]]==a[b[i]])
				{
					count[j]+=1;
				}
			}
		}
		if(x==0)
		{
			for(j=0;j<8;j++)
			{
				if(strlen(c[j])==n)
				{
					printf("%s\n",c[j]);
					break;
				}
			}
		}
		else
		{
			for(j=0;j<8;j++)
			{
				if(count[j]==x && strlen(c[j])==n)
				{
					printf("%s\n",c[j]);
					break;
				}
			}
		}
	}
	return 0;
}

