#include<stdio.h>
int main(int argc, char *argv[])
{
	int gl,gr,bl,br,i,j,k,l;
	scanf("%d %d\n%d %d",&gl,&gr,&bl,&br);
	printf((gl!=0)&&(br!=0)&&(br>=gl-1)&&(br<=2*gl+2)?"YES":((gr!=0)&&(bl!=0)&&(bl>=gr-1)&&(bl<=2*gr+2)?"YES":"NO"));
	return 0;
}