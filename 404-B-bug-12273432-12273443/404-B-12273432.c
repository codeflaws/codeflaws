#include<stdio.h>
const double e = 1e-6;
int main(int argc, char *argv[]){
	double a, d;
	long long int n;

	long long int A, D, temp;
	scanf("%lf %lf %lld", &a, &d, &n);
	A = (long long)(10000.0 * a + e);
	D = (long long) (10000.0 * d + e);

	printf("d = %lf, D = %lld\n", d, D);
	int i;
	for(i = 1 ; i<= n ; i++){
		temp = i * D;
		long long int ans = temp % (4*A);
		//printf("temp = %lld, ans = %lld, A = %lld\n", temp, ans, A);
		if(ans <= A) printf("%lf %lf\n", (double)ans/10000.0, 0.0);
		else if (ans <= 2*A) printf("%lf %lf\n", a, ((double)(ans - A))/10000.0);
		else if (ans <= 3*A) printf("%lf %lf\n",((double)(3*A - ans))/10000.0   , a );
		else printf("%lf %lf\n",0.0 , ((double)(4*A - ans))/10000.0);
	}
	return 0;
}
