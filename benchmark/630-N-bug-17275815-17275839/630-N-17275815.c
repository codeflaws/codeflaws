#include<stdio.h>

#include<math.h>
int main(int argc, char *argv[])
{
	
	float x1,x2,s,t,p,q,r1,r2,a,b,c;
	scanf("%10lf\t",&a);
	scanf("%10lf\t",&b);
	scanf("%10lf\t",&c);
	p=(b*b)-(4*a*c);
	q=sqrt(p);
	r1=q-b;
	r2=(q+b)*(-1);
	x1=r1/(2*a);
		x2=r2/(2*a);
	
	if(x1>x2)
	{
		s=x1;
		t=x2;
		printf("%10lf\n",s);
	printf("%10lf\n",t);
	}
	else
	{
	    s=x2;
	    t=x1;
	    	printf("%10lf\n",s);
	printf("%10lf\n",t);
	}
	
		
	
return 0;
}
	