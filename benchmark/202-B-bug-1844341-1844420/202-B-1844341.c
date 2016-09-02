#include<stdio.h>
int c[4],m[17],n,p,t,l;
char s[7][17],r[17][27][17];
void start(){
	int i;
	for(i=0;i<n;i++){
		c[i]=i;
	}
}
int get(){
	int i,j,r=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(c[i]>c[j]){
				r++;
			}
		}
	}
	return r;
}
int cat(int p){
	int i,j;
	for(i=0,j=0;i<m[p];i++){
		if(strcmp(s[c[j]],r[p][i])==0){
			j++;
		}
		if(j==n){
			return 1;
		}
	}
	return 0;
}
int sort(int i){
	int j,r;
	if(i==n-1){
		r=get();
		for(j=0;j<p;j++){
			if(cat(j)){
				if(t==-1){
					t=j;
					l=r;
				}else{
					if(l>r){
						t=j;
						l=r;
					}
				}
			}
		}
		return 0;
	}
	sort(i+1);
	for(j=i+1;j<n;j++){
		c[i]^=c[j];
		c[j]^=c[i];
		c[i]^=c[j];
		sort(i+1);
		c[i]^=c[j];
		c[j]^=c[i];
		c[i]^=c[j];
	}
}
void prn(){
	int i,j;
	printf("%d\n",n);
	for(i=0;i<n;i++){
		printf("%s ",s[i]);
	}
	printf("\n");
	printf("%d\n",p);
	for(i=0;i<p;i++){
		printf("%d ",m[i]);
		for(j=0;j<m[i];j++){
			printf("%s ",r[i][j]);
		}
		printf("\n");
	}
}
void run(){
	int i,j;
	for(;scanf("%d",&n)!=EOF;){
		for(i=0;i<n;i++){
			scanf("%s",s[i]);
		}
		scanf("%d",&p);
		for(i=0;i<p;i++){
			scanf("%d",&m[i]);
			for(j=0;j<m[i];j++){
				scanf("%s",r[i][j]);
			}
		}
		t=-1;
		start();
		sort(0);
		if(t==-1){
			printf("Brand new problem!\n");
		}else{
			printf("%d\n",t+1);
			printf("[:");
			l=n*(n-1)/2-l+1;
			for(j=0;j<l;j++){
				printf("|");
			}
			printf(":]\n");
		}
	}
}
int main(int argc, char *argv[]){
	run();
	return 0;
}
