#include <stdio.h>
//#include<math.h>
# define M_PI  3.14159265358979323846
int main(int argc, char *argv[]) {
	int d,h,v,e;
	scanf("%d%d%d%d",&d,&h,&v,&e);
	double a=M_PI*d*d*h;
	double b=4*v-M_PI*d*d*e;
	if(b>0){
		printf("%f\n",a/b);
	}else{
		printf("NO\n");
	}
	return 0;
}
