#include<stdio.h>
#include<math.h>
long long int x=5000002;
long long int d[6000030]={0},c[6000030]={0},ho[6000030]={0};
int main(int argc, char *argv[]){
	long long int i,j,a,b,t,o=sqrt(5000010);
	for(i=2;i<=o;i++){
		if(!d[i]){
			for(j=2*i;j<x;j+=i){
				if(j<x&&j>0)
				d[j]++;
			}
			for(j=i*i;j<x;j*=i){
				if(j<x&&j>0)
				ho[j]++;
			else break;

			}
		}

	}
	for(i=2;i<x;i++){
			if(!d[i]||ho[i]){
		int u=i;
		c[i]+=c[i-1];
		for(j=i;j<x;j+=i){
			if(j<x&&j>0)
			c[j]++;
		}
	}
	else{
		c[i]+=c[i-1];
	}
	}
	//for(i=2;i<8;i++)printf("%d\n",c[i]);
	scanf("%lld",&t);
	while(t--){
	scanf("%lld %lld",&a,&b);
	int sol=0;
		
	printf("%lld\n",c[a]-c[b]);
}
return 0;
}
