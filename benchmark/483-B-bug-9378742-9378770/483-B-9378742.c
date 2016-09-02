#include<stdio.h>
char possible(long long int);
long long int c1,c2,p1,p2;
int main(int argc, char *argv[]){
	long long int start,stop,mid;
	scanf("%I64d %I64d %I64d %I64d",&c1,&c2,&p1,&p2);
	start=c1+c2;
	stop=100;
	mid=(start+stop)/2;
	while(start<stop){
		if(possible(mid)){
			stop=mid;
		}
		else{
			start=mid+1;
		}
		mid=(start+stop)/2;
	}
	printf("%I64d\n",start);
	return 0;
}

char possible(long long int val){
	long long int d1,d2,cd,g1,g2;
	d1=val/p1;
	d2=val/p2;
	cd=val/(p1*p2);
	g1=0;g2=0;
	if(c1<=d2-cd){
		if(c2<=val-d2){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(c1<=val-d1){
			if(c2<=val-d2-(c1-(d2-cd))){
				return 1;
			}
			else{
				return 0;
			}
		}
		else{
			return 0;
		}
	}
}
