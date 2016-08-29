#include<stdio.h>

void quicksort(int sum[],int first,int last,int bns[])
{
	int  pivot,j,temp,i,temp2;
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			while(sum[i]<=sum[pivot]&& i<last)
				i++;
			while(sum[j]>sum[pivot])
				j--;
			if(i<j){
				temp=sum[i];
				sum[i]=sum[j];
				sum[j]=temp;
				
				temp2=bns[i];
				bns[i]=bns[j];
				bns[j]=temp2;
			}
		}
		temp=sum[pivot];
		sum[pivot]=sum[j];
		sum[j]=temp;

		temp2=bns[pivot];
		bns[pivot]=bns[j];
		bns[j]=temp2;

		quicksort(sum,first,j-1,bns);
		quicksort(sum,j+1,last,bns);
	}
}

int main(int argc, char *argv[])
{
	int s,n,i,flag=0;
	scanf("%d %d",&s,&n);
	int sd[n+5],bns[n+5];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&sd[i],&bns[i]);
	}
	
	quicksort(sd,0,n-1,bns);

	for(i=0;i<n;i++)
	{
		if(s>=sd[i])
		{
			s+=bns[i];
			continue;
		}
		else
		{
			flag=1;
			break;
		}
	}

	if(flag==1)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}

	return(0);
}



	
	        


	   

                    
             

           

















