#include<stdio.h>
typedef struct game
{
	int strength;
	int bonus;
} game;
int cmpfunc(const void *a, const void *b)
{
	game *c,*d;
	c = (game*)a;
	d = (game*)b;
	if(c->strength > d->strength) return(1);
	else if(c->strength < d->strength) return(-1);
	else return(0);
}
int main(int argc, char *argv[])
{
	int n,s,i;
	game arr[2000];
	scanf("%d %d",&s,&n);
	for(i=0;i<n;i++) scanf("%d %d",&arr[i].strength,&arr[i].bonus);
	qsort(arr, n, sizeof(game), cmpfunc);
	i = 0;
//	for(i=0;i<n;i++) printf("%d %d\n",arr[i].strength, arr[i].bonus);
	while(i<n)
	{
		if(arr[i].strength < s) 
		{
			s += arr[i].bonus;
			i++;
		}
		else
		{
			printf("NO\n");
			return(0);
		}
	}
	printf("YES\n");
	return(0);
}
