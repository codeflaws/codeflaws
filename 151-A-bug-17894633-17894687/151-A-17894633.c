#include<stdio.h>
int main(int argc, char *argv[])
{
int n,k,l,c,d,p,nl,np;
scanf("%d %d %d %d %d %d %d %d",&n, &k,&l,&c,&d,&p,&nl,&np);
l=(k*l)/(nl*n);
c = c*d/n;
p = p/np*n;

if ((l <= c)&&(l <= p)){
	printf("%d", l);
} else if ((c <= p)&&(c <= l)){
	printf("%d", c);
}else{
	printf("%d", p);

}
	return 0;
}
