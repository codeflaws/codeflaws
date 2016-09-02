#include<stdio.h>
int main(int argc, char *argv[]) {
	long long int flag2[2005],ans1=0,ans2=0,rem,max,flag1,min=10000000000,i,j,k,l,n,m,hi,a[2005],flag[2005] = {0},h[2005];
	scanf("%lld%lld",&n,&hi);
	for(i=0;i<n;i++){
		scanf("%lld%lld%lld",&flag[i],&h[i],&a[i]);
		flag2[i] = flag[i];
	}
	int p;
	flag1 = 0;
	long long int re = hi;
	for(i=0;i<n;i++) {
		max = -1;
		for(j=0;j<n;j++) {
			if(flag[j] == flag1 && h[j] <= hi && a[j] > max) {
				max = a[j];
				rem = j;
			}
		}
		if(max == -1)
			break;
		else {
			ans1++;
			hi += max;
			flag[rem] = -1;
		}
		flag1 = (flag1 + 1)%2;
	}
	flag1 = 1;
	hi = re;
	for(i=0;i<n;i++) {
		max = -1;
		for(j=0;j<n;j++) {
			if(flag2[j] == flag1 && h[j] <= hi && a[j] > max) {
				max = a[j];
				rem = j;
			}
		}
		if(max == -1)
			break;
		else {
			ans2++;
			hi += max;
			flag2[rem] = -1;
		}
		flag1 = (flag1 + 1)%2;
	}
	if(ans1 > ans2)
		printf("%lld\n",ans1);
	else
		printf("%lld\n",ans2);
	return 0;
}
