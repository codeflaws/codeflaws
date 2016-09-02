#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *order;
	int *item;
	int n,m,k;
	int i,j,l,o;
	int time = 0;
	int cnt, temp;
	
	//n : number of user, m : number of ordered item, k : number of total item
	scanf("%d %d %d", &n, &m, &k);
	order = (int*)malloc(sizeof(int)*m);
	item = (int*)malloc(sizeof(int)*k);
	
	//initial item arrange
	for(i=0;i<k;i++)
	{
		scanf("%d", &item[i]);
	}
	
	for(i=0;i<n;i++)
	{
		//get order
		for(j=0;j<m;j++)
		{
			scanf("%d", &order[j]);
		}
		
		//find item
		for(j=0;j<m;j++)
		{
			for(l=0;l<k;l++)
			{
				if(order[j]==item[l])
				{
					temp = item[l];
					cnt = l+1;
					for(o=l;o>0;o--)
					{
						item[o] = item[o-1];
					}
					item[0] = temp;
					time +=cnt;
					break;
				}			
			}		
		}
	}
	
	printf("%d\n", time);
	
	free(order);
	free(item);
	
	return 0;	
}