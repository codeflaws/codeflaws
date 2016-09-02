#include<stdio.h>
#include<stdlib.h>
#define ll long long int
long long int array[270000];
long long int inp[131703];
int invindex[131703];
int n,m,turn;
long long int build(int node,int a,int b) {
	//printf("%d %d %d\n",node,a,b);
	if (a==b) {
		turn=1;
		array[node]=inp[a];
		invindex[a]=node;
		return inp[a];
	}
	else {
		int mid=(a+b)/2;
		ll p=build(node*2,a,mid);
		ll q=build(node*2+1,mid+1,b);
		if (turn==1) p=(p|q);
		else p=(p^q);
		turn=1-turn;
		array[node]=p;
		return array[node];
	}
}

ll update(int node, ll value) {
	turn=1;
	ll nval;
	array[node]=value;
	while (node!=1) {
		if (node%2==1) {
			if (turn==1) {
				nval=array[node]|array[node-1];
				node/=2;
				array[node]=nval;
			}
			else {
				nval=array[node]^array[node-1];
				node/=2;
				array[node]=nval;
			}
		}
		else {
			if (turn==1) {
				nval=array[node]|array[node+1];
				node/=2;
				array[node]=nval;
			}
			else {
				nval=array[node]^array[node+1];
				node/=2;
				array[node]=nval;
			}
		}
		turn=1-turn;
	}
	return array[1];
}

int main(int argc, char *argv[]) {
	ll limit,p,b;
	ll i;
	int j,k;
	scanf("%d %d",&n,&m);
	limit=(1<<n);
	for (i=1;i<=limit;i++) {
		scanf("%lld",&inp[i]);
	}
	printf("Done\n");
	build(1,1,limit);
	for (j=1;j<=m;j++) {
		scanf("%lld %lld",&p,&b);
		printf("%lld\n",update(invindex[p],b));
	}
	return 0;
}


		

