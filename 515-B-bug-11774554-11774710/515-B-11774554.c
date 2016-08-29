#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,m,h1,h2,x,y;
	scanf("%d %d\n",&n,&m);
	int b[n],g[m],i,j;
	for(i=0;i<n;i++) b[i]=0;
	for(i=0;i<m;i++) g[i]=0;
	scanf("%d",&h1);
	for(i=1;i<=h1;i++){
		scanf("%d",&x);
		b[x]=1;
	}
	scanf("%d",&h2);
	for(i=1;i<=h2;i++){
		scanf("%d",&y);
		g[y]=1;
	}
	for(i=0;i<=150;i++){
		if(b[i%n]||g[i%m]){
			b[i%n]=1;
			g[i%m]=1;
		}
	}
	int flag1=1,flag2=1;
	for(i=0;i<n;i++){
		if(b[i]==0){
			flag1=0;
			break;
		}
	}
	for(i=0;i<m;i++){
		if(g[i]==0){
			flag2=0;
			break;
		}
	}
	if(flag1&&flag2) printf("Yes");
	else printf("No");
	return 0;
}
