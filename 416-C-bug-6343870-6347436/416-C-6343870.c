//1a
#include<stdio.h>
int n,k,x,y;
struct c{
	int c,p;
}c[1007];
int r[1007],s[1007],a[1007],z[1007];
int inc(const void *p,const void *q){
	return r[*(int*)p]-r[*(int*)q];
}
void cat(){
	int i,j;
	for(i=0;i<n;i++){
		s[i]=-1;
	}
	for(i=0;i<k;i++){
		a[i]=-1;
		z[i]=i;
	}
	qsort(z,k,sizeof(z[0]),inc);
	for(i=0;i<k;i++){
		for(j=0;j<n;j++){
			if(s[j]==-1&&c[j].c<=r[z[i]]){
				if(a[z[i]]==-1){
					a[z[i]]=j;
					s[j]=z[i];
				}else{
					if(c[a[z[i]]].p<c[j].p){
						s[a[z[i]]]=-1;
						a[z[i]]=j;
						s[j]=z[i];
					}
				}
			}
		}
	}
	x=0;
	y=0;
	for(i=0;i<n;i++){
		if(s[i]!=-1){
			x++;
			y+=c[i].p;
		}
	}
	printf("%d %d\n",x,y);
	for(i=0;i<n;i++){
		if(s[i]!=-1){
			printf("%d %d\n",i+1,s[i]+1);
		}
	}
}
void run(){
	int i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d%d",&c[i].c,&c[i].p);
		}
		scanf("%d",&k);
		for(i=0;i<n;i++){
			scanf("%d",&r[i]);
		}
		cat();
	}
}
int main(int argc, char *argv[]){
	run();
	return 0;
}
