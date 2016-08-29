#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,k,x,i,max=0,start,end;
	scanf("%d%d%d",&n,&k,&x);
	int A[n],consecutive[n-1],count=0,count2=0,temp,temp2,tempcount;
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n-1;i++)
	{
		if(A[i]==A[i+1] && A[i]== x)
			consecutive[count++]=i;
	}
	//printf("%d\n",count );
	for(i=0;i<count;i++)
	{
		start=consecutive[i];
		end=consecutive[i]+1;
		start--;
		end++;
		tempcount=2;
		while(start!=-1 && end != n)
		{
			count2=0;
			if(A[start]==A[end] && (start && A[start-1]==A[end]) && (end!=n-1 && A[start]==A[end+1]))
				count2=4,start-=2,end+=2;
			else if((A[start]== A[end])&&(start && A[start-1]==A[end]))
				count2=3,start-=2,end+=1;
			else if((A[start]==A[end])&&(end!=n-1 && A[start]==A[end+1]))
				count2=3,start-=1,end+=2;
			else
				;
			if(count2>=3)
				tempcount=tempcount+count2;

		}
	
		if(tempcount>max)
			max=tempcount;
	}
	printf("%d\n",max );
	return 0;
}