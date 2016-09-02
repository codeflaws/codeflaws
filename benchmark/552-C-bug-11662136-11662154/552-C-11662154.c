#include<stdio.h>
long long int w,m,arr[105][2],last,st=0;
void func(long long int m)
{
//	printf("%lld\n",m);
	if(m==0)
	{
		st=1;
		return;
	}
	long long int i;
	for(i=0;i<last;i++)
		if(m>arr[i][0])
			continue;
		else if(m==arr[i][0] && arr[i][1]==0)
			func(0);
		else
		{
			if(arr[i][0]-m>=m-arr[i-1][0])
			{
				if(arr[i-1][1]==0)
				{
					arr[i-1][1]=1;
					func(m-arr[i-1][0]);
					arr[i-1][1]=0;
				}
				if(arr[i][1]==0 && st==0)
				{
					arr[i][1]=1;
					func(arr[i][0]-m);
					arr[i][1]=0;
				}
			}
			else
				if(arr[i][1]==0)
				{
					arr[i][1]=1;
					func(arr[i][0]-m);
					arr[i][1]=0;
				}
			break;
		}
}
int main(int argc, char *argv[])
{
	long long int i;
	scanf("%lld %lld",&w,&m);
	arr[0][0]=1;
	arr[0][1]=0;
	arr[1][0]=w;
	arr[1][1]=0;
	for(i=2;i<=100;i++)
	{
		if(arr[i-1][0]*w<=1000000000)
		{
			arr[i][0]=arr[i-1][0]*w;
			arr[i][1]=0;
		}
		else
		{
			arr[i][0]=arr[i-1][0]*w;
			arr[i][1]=0;
			break;
		}
	}
	last=i+1;
	if(last==102)
		last--;
	func(m);
	if(st==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
