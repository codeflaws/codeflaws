#include<stdio.h>
typedef struct abc
{
	int a;
	int b;
}abc;

abc ar[8];

static int compare(const void *i1,const void *i2)
{
	        const abc *p1=(const abc *)i1;
		const abc *p2=(const abc *)i2;
		return (p1->a-p2->a);
}


int main(int argc, char *argv[])
{
	int x,y,z,min,max;
	
	for(x=0;x<8;x++)
	{
		scanf("%d %d",&ar[x].a,&ar[x].b);
	}
        qsort(&ar[0],8,sizeof(abc),compare);
	
	if(ar[0].a != ar[1].a || ar[0].a != ar[2].a)
		printf("ugly\n");
	else if(ar[5].a != ar[6].a || ar[5].a != ar[7].a)
		printf("ugly\n");
	else if(ar[3].a != ar[4].a)
		printf("ugly\n");
	else if(ar[0].a == ar[7].a)
		printf("ugly\n");
	else if(ar[0].a == ar[3].a)
		printf("ugly\n");
	else
	{
		printf("done\n");	
		x=ar[0].b;y=ar[1].b;z=ar[2].b;
		if(x==y || x==z)
			printf("ugly\n");
		else
		{
			min=10000000;max=-1;
			for(x=5;x<8;x++)
			{
				if(ar[x].b<min)
					min=ar[x].b;
				if(ar[x].b>max)
					max=ar[x].b;
				for(y=0;y<=2;y++)
				{
					if(ar[x].b==ar[y].b)
						break;
				}
				if(y==3)
					break;
			}
			if(y==3)
				printf("ugly\n");
			else
			{
				x=ar[5].b;y=ar[6].b;z=ar[7].b;
				if(x==y || x==z)
					printf("ugly\n");
				else if(!(ar[3].b == min || ar[3].b ==max))
					printf("ugly\n");
				else if(!(ar[4].b == min || ar[4].b ==max))
					printf("ugly\n");
				else if(ar[3].b == ar[4].b)
					printf("ugly\n");
				else
					printf("respectable\n");
			}
		}
	}
	return 0;
}

