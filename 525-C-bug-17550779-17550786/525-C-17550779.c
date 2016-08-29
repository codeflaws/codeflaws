#define N 100000
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
	return *(int *)b-*(int *)a;
}
void sort(int a[],int n){
	qsort(a,n,sizeof(int),compare);
}
//从大到小排列
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int i;
	int l[N];
	for(i=0;i<n;i++){
		scanf("%d",&l[i]);
	}
	sort(l,n);
	long long area=0;
	if(n<4){
		printf("0\n");
	}else{
		int a43start=0;
		int a21start=0;
		int a4,a3,a2,a1;
		int find;
		while(1){
			find=0;
			for(i=a43start;i<n-1;i++){
				if(l[i]==l[i+1]){
					a4=l[i];
					a3=l[i+1];
					a21start=i+2;
					find=1;
					break;
				}else if(l[i]-1==l[i+1]){
					a4=l[i]-1;
					a3=l[i+1];
					a21start=i+2;
					find=1;
					break;
				}
			}
			if(!find)break;
			find=0;
			for(i=a21start;i<n-1;i++){
				if(l[i]==l[i+1]){
					a2=l[i];
					a1=l[i+1];
					a43start=i+2;
					find=1;
					break;
				}else if(l[i]-1==l[i+1]){
					a2=l[i]-1;
					a1=l[i+1];
					a43start=i+2;
					find=1;
					break;
				}
			}
			if(!find)break;
			area+=(long long)a4*(long long)a1;
		}
	}
	printf("%lld\n",area);
	//最多减一
	return 0;
}
