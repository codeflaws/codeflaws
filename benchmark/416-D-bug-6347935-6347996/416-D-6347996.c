#include<stdio.h>
int a[200007],n;
int cat(int l){
	int i,j,k; 
 	i=l;
	for(;i<n;i++){
		if(a[i]!=-1){
			j=i;
			break;
		}
	}
	for(i++;i<n;i++){
		if(a[i]!=-1){
			k=i;
			break;
		}
	}
 	if(i<n&&((a[k]-a[j])%(k-j)!=0||((long long)a[k]-a[j])*(l-k)+(long long)a[k]*(k-j)<=0)) {
 	 	return cat(i) +1;
 	}
	for(i++;i<n;i++){
 	 	if((a[i]==-1&& ((long long)a[k]-a[j])*(i-k)+(long long)a[k]*(k-j)<=0) ||
		(a[i]!=-1&&((long long)a[k]-a[j])*(i-k)!=((long long)a[i]-a[k])*(k-j))){
			return cat(i)+1;
		}
	}
	return 1;
}
void run(){
	int i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		printf("%d\n",cat(0));
	}
}
int main(int argc, char *argv[]){
	run();
	return 0;
}
