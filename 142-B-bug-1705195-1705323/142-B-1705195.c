#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[]){
	int n,m,t,sum,i;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n==1||m==1)printf("%d\n",n*m);
		else if(n%2==0||m%2==0)printf("%d\n",n*m/2);
		else printf("%d\n",(n/2+1)*m-m/2);
	}
return 0;
}

  		 						 	  		     	 	