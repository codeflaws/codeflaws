#include<stdio.h>
//#include<math.h>
# define M_PI  3.14159265358979323846

int main(int argc, char *argv[]) {
	//上一个方法用体积进行计算，
	//下一个方法用高度进行计算
	int d,h,v,e;
	scanf("%d%d%d%d",&d,&h,&v,&e);
	double r=d/2.0;
	//printf("r=%f\n",r);
	//printf("in: %f\n",e*1.0);
	//printf("out: %f\n",v/(M_PI*r*r));
	if(e>v/(M_PI*r*r)){
		printf("NO\n");
	}else{
		printf("%f\n",h/(v/(M_PI*r*r)-e));
	}
	return 0;
}
