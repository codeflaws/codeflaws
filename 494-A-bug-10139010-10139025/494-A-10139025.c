#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	int flag,sum,max,sum1,i,j,k,l,n,m,h;
	char c[100000];
	scanf("%s",c);
	n = strlen(c);
	h=0;
	flag=1;
	for(i=0;i<n;i++){
		if(c[i]=='#'){
			h++;
			max=i;
		}
		else if(c[i]=='(')
			sum++;
		else if(c[i]==')')
			sum--;
	}
	if((sum==0 && h>0) || sum-h+1<=0)
		flag=0;
	sum1=0;
	if(flag==0)
		printf("-1\n");
	else{
		for(i=0;i<n;i++){
			if(c[i]=='(')
				sum1++;
			else if(c[i]=='#'){
				if(i!=max)
					sum1--;
				else
					sum1 = sum1 - (sum-h+1);
			}
			else if(c[i]==')')
				sum1--;
			else ;
			if(sum1<0){
				printf("-1\n");
				flag=0;
				break;
			}
			else;
		}
		if(flag==1)
			for(i=0;i<n;i++)
				if(c[i]=='#'){
					if(i!=max)
						printf("1\n");
					else
						printf("%d\n",sum-h+1);
				}
	}
	return 0;
}
