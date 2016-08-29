#include <stdio.h>

long int s[100001];
long int now[25];
long int n;
long int fail=0;
	long int num[25];

long int fN(int p){
	long int next,r;;
	r=now[p];
	next = now[p]>>p;
	next = next+1;
	next = next<<p;
	next = next+1;
	now[p]=next;
	//printf("r=%ld\n",r);
	return r;
}
void search(int p){
	int i;
	//printf("p=%d,num[p]=%ld\n",p,num[p]);
	if(fail||p<0) return;
	if(p==0) {
		fail=1;
		return;
	}
	if(num[p]>0){
		num[p]--;
		n++;
		s[n]=fN(p);
	}else{
	//printf("p=%d,num[p]=%ld\n",p,num[p]);
		search(p-1);
		search(p-1);
	}
}
	
int main(int argc, char *argv[]){
	long int sum,limit;
	long int i,j,k;

	scanf("%ld%ld",&sum,&limit);

	i=limit;j=1;
	while(i>0){
		num[j]=i/2;
		if(i%2==1) num[j]++;
		i=i/2;
		now[j]=1<<(j-1);
		//printf("now[%ld]=%ld\n",j,now[j]);
		j++;
	}
	j = j-1;
	i=sum;n=0;k=1;
	while(i>0){
		if(i%2==1){
			search(k);
			if(fail) {
				printf("-1\n");
				return 0;
			}
		}
		i=i/2;k++;
	}

	printf("%ld\n",n);
	printf("%ld",s[1]);
	for(i=2;i<=n;i++) printf(" %ld",s[i]);
	printf("\n");
	return 0;
}
