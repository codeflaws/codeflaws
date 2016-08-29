#include<stdio.h>
int i,x,y,a,n,m,erkek[5000],kiz[5000];
int knt(){
	int i;
	for(i=0;i<n;i++)
		if(!erkek[i])
			return 0;

	for(i=0;i<m;i++)
		if(!kiz[i])
			return 0;
	
	return 1;
}
int main(int argc, char *argv[]){
	scanf("%d %d",&n,&m);
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		scanf("%d",&a);
		erkek[a]=1;
	}
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		scanf("%d",&a);
		kiz[a]=1;
	}
	for(i=0;i<=m*n;i++){
		if(erkek[i%n] || kiz[i%m])
			erkek[i%n] = kiz[i%m] = 1;
		
		
		if(knt()){
			puts("Yes");
			return 0;
		}
	}
	puts("No");
return 0;
}
