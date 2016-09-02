#include<stdio.h>
#include<string.h>
#define MAX 100010

int pairs[MAX][2];
int prime[MAX];
int match[MAX];

void check(int n);

int main(int argc, char *argv[])
{
	int n,i,j,k;
	int count_pairs,cnt,start;
	scanf("%d",&n);

	memset(prime,1,sizeof(prime));
	memset(match,-1,sizeof(match));
	for(i=2; i<=n; i++) {  //Prime numbers
		if(prime[i]==0)
			continue;
		for(j=i+i; j<=n; j+=i)
			prime[j]=0;
	}

	//check(n);

	if(n==2) {
		puts("0");
		return 0;
	}

	count_pairs=cnt=0;

	for(i=3; i<=n/2; i++)
	{
		if(prime[i]==0)
			continue;
		cnt=0;
		for(j=i; j<=n; j+=i)
			if(match[j]==-1)
				cnt++;
		if(cnt%2!=0)
			match[2*i]=0;
		for(j=i; j<=n;) {
			if(match[j]!=-1) {
				j+=i;
				continue;
			}
			k=j+i;
			while(k<=n && match[k]!=-1)
				k+=i;
			if(k<=n) {
				pairs[count_pairs][0]=j;
				pairs[count_pairs][1]=k;
				count_pairs++;
				match[j]=1;
				match[k]=1;
				j=k;
			}
		}
	}

	cnt=0;
	for(i=2; i<=n; i++)
	{
		if(i%2==0 && match[i]!=1) {
			pairs[count_pairs][cnt]=i;
			cnt^=1;
			if(cnt==0)
				count_pairs++;
		}
	}

	printf("%d\n",count_pairs);
	for(i=0; i<count_pairs; i++)
		printf("%d %d\n",pairs[i][0],pairs[i][1]);
	return 0;
}

void check(int n)
{
	int i;
	for(i=1; i<=n; i++)
		printf("%d %d\n",i,prime[i]);
}