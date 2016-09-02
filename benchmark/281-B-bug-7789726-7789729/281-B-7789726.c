#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]){
	int x,y,n;
	scanf("%d %d %d\n",&x,&y,&n);
	double res = (double)0/1, input = (double)x/y;
	int a = 0, b = 0;
	int num = 0;
	int i;
	for(i = 1; i <= n; i++){
		while(1){
			double cur = (double)num/i;
			if(fabs(cur-input) < fabs(res-input)){
				res = cur;
				a = num;
				b = i;
			}
			if(num <= x && fabs((double)(num+1)/i - input) < fabs(cur-input) ){
				num++;
			}
			else{	break;	}
		}

	}
	printf("%d/%d\n",a,b);

	return 0;
}
