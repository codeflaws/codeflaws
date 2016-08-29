#include<stdio.h>
#include<math.h>
int ans=0;
int cnt=0;
int k=0,n,y;
int a[5000];
int cmpfunc(const void *a,const void *b)
{
	return  (*(int *)a-*(int *)b);
}
int func(int i)
{
	if(i>=y)

		return 0;
	int ans1=func(2*i)+a[2*i];
	int ans2=func(2*i+1)+a[2*i+1];
	if(ans1>ans2)
	{
		cnt+=ans1-ans2;
		return ans1;
	}
	else
	{
		cnt+=ans2-ans1;
		return ans2;
	}
	
	
	
	



}
int main(int argc, char *argv[])
{
	scanf("%d",&n);
	
	y=pow(2,n+1);
	int i;
	for(i=2;i<y;i++)
		scanf("%d",&a[i]);
	func(1);
	printf("%d",cnt);
	return 0;
}





