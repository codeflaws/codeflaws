#include<stdio.h>
#include<math.h>
long int n,a[300009];
int check(long int i)
{long int j,cnt=0,k,univ=0;
	for(j=0;j<i;j++)
			{cnt=0;univ=0;
				for(k=j;cnt<n/i;k+=i,cnt++)
				{
					if(k>n-1)
						k-=n;
					if(a[k]==0)
						{univ=1;break;}
				}
				if(!univ)
				return 1;
			}
	return 0;
}
int main(int argc, char *argv[])
{
	long int i,k;
	scanf("%ld",&n);long int cans=sqrt(n),cnt=0;
	for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
	for(i=1;i<=cans;i++)
		if(n%i==0)
		{long int itemp=i;
			if(check(i) || ( i>2 && check(n/i)))
			{
				printf("YES\n");return 0;
			}
		}
	printf("NO\n");return 0;
}
