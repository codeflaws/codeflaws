#include<stdio.h>

int N, T;
int map[110][110], ar[110][2], used[110];

void ara_ekle(int a, int b)
{
	int i;
	ar[T][0]=a; ar[T][1]=b;
	for(i=0;i<T;i++)
	{
		if( 	(ar[i][0]<a && a<ar[i][1]) ||
		 		(ar[i][0]<b && b<ar[i][1]) )
				  map[T][i]=1;
		if( 	(a<ar[i][0] && ar[i][0]<b) ||
		 		(a<ar[i][1] && ar[i][1]<b) )
				  map[i][T]=1;
	}
}

int kont(int a, int b)
{
	int i;

	used[a]=1;
	if(a==b) return 1;

	for(i=0;i<T;i++)
		if(map[a][i] && !used[i])
		{
			if(kont(i,b)==1) return 1;
		}
	return 0;
}

void islem()
{
	int i, j, a, b, c;

	scanf(" %d",&N);

	for(i=0;i<N;i++)
	{
		scanf(" %d",&a);
		if(a==1)
		{
			scanf(" %d %d",&b,&c);
			ara_ekle(b,c);
			T++;
		}
		if(a==2)
		{
			scanf(" %d %d",&b,&c);
			for(j=0;j<T;j++) used[j]=0;
			printf("%s\n",kont(b-1,c-1)?"YES":"NO");
		}
	}
}

int main(int argc, char *argv[])
{
	islem();
	return 0;
}
