#include<stdio.h>
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int a[105],s,t,i;
	for(i=1;i<n+1;i++)
		scanf("%d",&a[i]);
	scanf("%d%d",&s,&t);
	if(s==t)
		printf("0\n");
	else
	{
		if(s>t)
		{
			i=t;
			t=s;
			s=i;
		}
		int d1=0,d2=0;
		for(i=s;i<t;i++)
			d1+=a[i];
		for(i=s;i>0;i--)
			d2+=a[i];
		for(i=t;i<n+1;i++)
			d2+=a[i];
		if(d1<d2)
			printf("%d\n",d1);
		else
			printf("%d\n",d2);
	}
	return 0;
}