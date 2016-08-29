#include <stdio.h> 
int niz[3005];
int main(int argc, char *argv[])
{
	int n,i,d,r,t,a;
	d=a=0;
	char x,c;
	scanf("%d%*[\r\n\t]",&n);
	r=n;
	for (i=0;i<n;i++) 
	{
		scanf("%c", &x);
		if (x!='.')
		{
			c=x;
			if ((d==0) && (x=='L'))
			{
				r=r-i-1;
				a=1;
			}	
			niz[d]=i;
			d++;
		}
	}
	if (c=='R')
	{
		r=r-(n-niz[d])+1;
		d--;
	}	
	for (i=a;i<d-1;i+=2)
	{
		t=niz[i+1]-niz[i]+1;
		r=r-t+(t%2);
	}
	printf("%d\n",r);
	return 0;
}