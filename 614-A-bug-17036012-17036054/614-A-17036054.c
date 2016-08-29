#include<stdio.h>
//这个问题的重点是：检查是不是出界了！
int main(int argc, char *argv[]) {
	long long l,r;
	scanf("%lld%lld",&l,&r);
	int k;
	scanf("%d",&k);
	long long power=1;
	long long kk=k;
	long long new_power;
	while(power<l){
		new_power = power * kk;
		if(new_power/kk==power){
			power=new_power;
		}else{
			break;
		}
	}
	int find=0;
	while(power>=l && power<=r){
		find=1;
		printf(" %lld",power);
		new_power = power * kk;
		if(new_power/kk==power){
			power=new_power;
		}else{
			break;
		}
	}
	if(!find){
		printf("-1");
	}
	printf("\n");
	return 0;
}
