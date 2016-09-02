#include<stdio.h>
int main(int argc, char *argv[]){
	int i,j=0,k,n;
	scanf("%d%d",&n,&k);
	while(n--){
		int num,c=0;
		scanf("%d",&num);
		while(num>0 && c<=k){
			i=num%10;
			num=num/10;
			//printf("number is %d\n",num);
			if(i==4 || i==7)
			{
				c++;
			//	printf("c is %d\n",c);
			}
		}
		//printf("c is %d and k is %d\n",c,k);
		if(c<=k){
			j++;
		}
	}
	printf("%d\n",j);
	return 0;
}
