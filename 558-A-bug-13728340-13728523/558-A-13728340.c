#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int n;
	int tree[100][2];
	int a,b;
	int pos=0;
	int neg=0;
	int loc=0;
	int apple=0;
	int swap[2];
	int way;
	scanf("%d",&n);
	for(a=0;a<=n-1;a++){
		scanf("%d %d",&tree[a][0],&tree[a][1]);
		if(tree[a][0]>0)
			pos++;
		else
			neg++;
	}
	for(a=0;a<=n-1;a++){
		for(b=a;b<=n-2;b++){
			if(tree[b][0]>tree[b+1][0]){
				swap[0]=tree[b][0];
				swap[1]=tree[b][1];
				tree[b][0]=tree[b+1][0];
				tree[b][1]=tree[b+1][1];
				tree[b+1][0]=swap[0];
				tree[b+1][1]=swap[1];
			}
		}
	}
	if(pos>neg)
		way=1;
	else
		way=0;
	while(1){
		if(way==1){
			if(tree[n-1][1]==0)
				break;
			for(a=0;a<=n-1;a++){
				if(tree[a][0]>0&&tree[a][1]!=0){
					apple=apple+tree[a][1];
					tree[a][1]=0;
					way=0;
					break;
				}
			}
		}
		else{
			if(tree[0][1]==0)
				break;
			for(a=n-1;a>=0;a--){
				if(tree[a][0]<0&&tree[a][1]!=0){
					apple=apple+tree[a][1];
					tree[a][1]=0;
					way=1;
					break;
				}
			}
		}
	}
	printf("%d",apple);

	return 0;
}