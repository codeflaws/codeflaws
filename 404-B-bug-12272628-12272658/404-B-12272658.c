#include<stdio.h>
double fun(double em, double a){
	
	double b1 = a, b2 = 2 * a , b3 = 3 * a , b4 = 4 * a;
//	printf("%lf %lf %lf %lf\n", b1, b2, b3, b4);
	long long int rounds = em / b4;
	double ans = em - rounds * b4;
//	printf("dekho ans %f\n", ans);

	if(ans >= 0.0 && ans <= b1){
		printf("%lf %lf\n", ans, 0.0);
	}
	else if(ans > b1 && ans <= b2){
		printf("%lf %lf\n", a,  ans - a );
	}
	else if(ans > b2 && ans <= b3){
		printf("%lf %lf\n", 3*a - ans, a);
	}
	else printf("%lf %lf\n", 0.0, 4*a - ans);

	return ans;	
}
int main(int argc, char *argv[]){
	double a, d;
	int n;
	scanf("%lf %lf %d", &a, &d, &n);

	int i = 0;
	double emit = d;
	for(i = 1 ; i <= n ; i++){
		emit = i * d;
		emit = fun(emit, a);
	//	printf("\n");
	}
	return 0;
}
