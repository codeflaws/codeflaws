#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

int p,q,l,r,z[50][2],x[50][2],i,j,t[1001]={0};
int temp1,temp2,k,count=0;
scanf("%d%d%d%d",&p,&q,&l,&r);

for(i=0;i<p;i++)
	scanf("%d%d",&z[i][0],&z[i][1]);
for(i=0;i<q;i++)
	scanf("%d%d",&x[i][0],&x[i][1]);

for(i=0;i<p;i++)
	{
	for(j=0;j<q;j++)
		{
		temp1=z[i][0]-x[j][1];
		temp2=z[i][1]-x[j][0];
		if(temp1<l)
			temp1=l;
		if(temp2>r)
			temp2=r;
		if(temp1<r&&temp2>l)
			for(k=temp1;k<=temp2;k++)
				t[k]=1;
		}	
	}
for(k=l;k<=r;k++)
	if(t[k])
		count++;
printf("%d",count);
return 0;
}