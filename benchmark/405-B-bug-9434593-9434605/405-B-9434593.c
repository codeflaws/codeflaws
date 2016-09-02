#include<stdio.h>
int main(int argc, char *argv[])
{
	char input[3001],space;
	int n,i,vert_domino,count_dot,count,i1,i2;
	count=0;
	vert_domino=0;
	count_dot=0;
	i1=-1;
	scanf("%d",&n);
	scanf("%c",&space);
	scanf("%c",&input[0]);
//	printf("%c",input[0]);
	if(input[0]=='.')
		count=1;
//	{         
			//while(input[i]!='R' || input[i]!='L')
		i=1;
		while(i!=n)
		{
			scanf("%c",&input[i]);
//			printf("%c input  %d ",input[i],i);
			if(input[i]=='.')
			{

				count++;
//				printf("%d count",count);
				i++;
				continue;
			}
			if(i1==-1 && input[i]=='R')
			{
				vert_domino=count;
				i1=i;
				count=0;
//				printf("%d 2",vert_domino);
	//			i++;
			}
			if(i1==-1 && input[i]=='L')
			{
				count=0;
				i1=i;
//				printf("%c %d i1",input[i1],i1);
	//			i++;
			}
			if(input[i1]=='R' && input[i]=='L' && i!=i1+1)
			{
//				printf("Even\n");
				i2=i;
				if(count%2!=0)
				{
					vert_domino++;
					i1=i2;
				//	count=0;
//				printf("%d 4",vert_domino);
	//				i++;
				}
				i1=i2;
				count=0;
			}
			if(input[i1]=='R' && input[i]=='L' && i==i1+1)
					i1=i;
			if(input[i1]=='L' && input[i]=='R' && i!=i1+1)
				{
					i2=i;
//					printf("%d i2",i2);
				//	if(count%2!=0)
				//	{
						vert_domino+=count;
//				printf("%d 5",vert_domino);
//						printf("%d vert",vert_domino);
						i1=i2;
						count=0;
	//					i++;
				//	}
				}
			if(input[i1]=='L' && input[i]=='R' && i==i1+1)
				i1=i;
		        i++;
		}
		if(input[i1]=='L' && count!=0)
			vert_domino+=count;
		if(count==n)
			printf("%d\n",n);
		else
		printf("%d\n",vert_domino);
		return 0;
}


