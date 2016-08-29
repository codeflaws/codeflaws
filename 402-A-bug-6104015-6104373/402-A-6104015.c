#include <stdio.h>
int main(int argc, char *argv[])
{
	int k,a,b,v,sum,tmp;
	while(~scanf("%d%d%d%d",&k,&a,&b,&v)){
		sum=0;
		if(b+1>=k){
			while(a>0){
				sum++;
				if(b+1>k){
					b=b-k+1;
					tmp=k;
				} else {
					b=0;
					tmp=b+1;
				}
				a-=(tmp*v);
				tmp=1;
			}
			printf("%d\n",sum);
			continue;
		} else {
			tmp=b+1;
			while(a>0){
				sum++;
				a-=(tmp*v);
				tmp=1;
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}