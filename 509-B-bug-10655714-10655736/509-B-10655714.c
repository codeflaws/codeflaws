#include<stdio.h>
#include<string.h>
int a[106];
int main(int argc, char *argv[])
{
	int n,m,i,j,min,max,t;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		max=-1;min=200;
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			if(a[i]<min){
				min=a[i];
			}
			if(a[i]>max){
				max=a[i];
			}
		}
		if(max-min>m){
			printf("NO\n");
			continue;
		}
		printf("YES\n");
		for(i=1;i<=n;i++){
			for(j=1;j<=min-1;j++){
				printf("1 ");
			}
			if(a[i]==min){
				printf("1\n");continue;
			}
			printf("1 ");
			t=2;
			for(j=min+1;j<=a[i]-1;j++){
				printf("%d ",t);
				t++;
			}
			printf("%d\n",t);
		}
	}
	return 0;
}