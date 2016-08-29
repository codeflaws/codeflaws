#include<stdio.h>
#include<string.h>
char z[1000001];
int main(int argc, char *argv[])
{
	int flag=0;
	long long int n,i,j,p,q,a,b;
	scanf("%s",z);
	scanf("%lld %lld",&a,&b);
	unsigned long long int num;
	n=strlen(z);
	z[n]='\0';
	long long int r[n];
	if(z[0]!='0')
	{
		num=z[0]-'0';
		r[0]=num%2;
	}
	else 
		flag=1;
	for(i=1;i<n&&flag!=1;i++)//check with a
	{
		num=num*10+z[i]-'0';
		num=num%a;
		r[i]=num;
	}
	//check with b
	p=1;
	num=0;
	for(i=n-1;i>=0&&flag!=1;i--)
	{
		num=(num%b+((z[i]-'0')%b*p)%b)%b;
		p=(p*10%b)%b;
		//printf("%lld\n",p);
		if(num==0)
		{
			if(r[i-1]==0)
			{
				if(z[i]!='0')
				{
					printf("YES\n");
					for(j=0;j<i;j++)
						printf("%c",z[j]);
					printf("\n");
					for(j=i;j<n;j++)
						printf("%c",z[j]);
					printf("\n");
					return 0;
				}	
			}
		}
	}
	printf("NO\n");
	return 0;
}
