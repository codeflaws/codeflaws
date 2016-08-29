#include<stdio.h>
#include<math.h>
int r,h,vol;
int main(int argc, char *argv[])
{
	scanf(" %d %d",&r,&h);

	vol = h / r * 2;
	h %= r;
	if (2*h<r)
		vol++;
	else if(h*2 >= sqrt(3)*r)
		vol += 3;
	else
		vol += 2;
	printf("%d",vol);
	return 0;
}
