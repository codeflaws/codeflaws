#include<stdio.h>

int power(int a)
{
		int i;
		int yo=1;
		for( i=0 ; i<a ; i++ )
				yo*=2;
		return yo;
}

int main(int argc, char *argv[])
{
		int n;
		scanf("%d",&n);

		int c=0;
		int x=n;
		while(x)
		{
				x=x/10;
				c++;
		}

		int ans = 0  ;
		int a[100]={0};
		int i;
		x=n;
		for( i=0 ; i<c ; i++ )
		{
				ans += power(i);
				a[i]=x%10;
				x=x/10;
		}
	
		int flag=0;

		for( i=c-1 ; i>=0 ; i-- )
		{
				if(a[i]==7)
				{
						flag==1;
						ans+=power(i);
				}
				if( flag==1 && a[i]==4 )
				{
						ans+=1;
				}
		}
		printf("%d\n",ans);

}
