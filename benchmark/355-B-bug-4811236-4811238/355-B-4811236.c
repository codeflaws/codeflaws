# include <stdio.h>

# define min1(x,y) (x>y ? y : x)


int c1,c2,c3,c4;

int n,m;

int bu,tr;

int main(int argc, char *argv[])
{
	int i;
		scanf("%d %d %d %d",&c1,&c2,&c3,&c4);
		scanf("%d %d",&n,&m);
		for ( i=0;i<n;i++)
		{ int t;
		scanf("%d",&t);
		bu+=min1(t*c1,c2);
		}
		for ( i=0;i<m;i++) 
		{int t;
		scanf("%d",&t);
		tr+=min1(t*c1,c2);
		}
		bu=min1(bu,c3);	tr=min1(tr,c3);
		printf("%d",min1(c4,bu+tr));

}
