/*****************************************************************
	> File Name: cf452b.c
	> Author: Chen Ran<crccw@moonux.org>
	> Created Time: Mon 28 Jul 2014 01:54:10 AM CST
 ****************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(int argc, const char *argv[])
{
	int n,m;
	double dis1,dis2;
	scanf("%d%d",&n,&m);

	if(n==0){
		printf("%d %d\n",0,1);
		printf("%d %d\n",0,m);
		printf("%d %d\n",0,0);
		printf("%d %d\n",0,m-1);
	}else if(m==0){
		printf("%d %d\n",1,0);
		printf("%d %d\n",n,0);
		printf("%d %d\n",0,0);
		printf("%d %d\n",n-1,0);
	}else{
		if(n<m){
			dis1=sqrt((n-1)*(n-1)+m*m)*2+sqrt(n*n+m*m);
			dis2=sqrt(n*n+m*m)*2+m;
			if(dis1>dis2){
				printf("%d %d\n",n-1,m);
				printf("%d %d\n",0,0);
				printf("%d %d\n",n,m);
				printf("%d %d\n",1,0);
			}else{
				printf("%d %d\n",0,m);
				printf("%d %d\n",n,0);
				printf("%d %d\n",n,m);
				printf("%d %d\n",0,0);
			}
		}else{
			dis1=sqrt((m-1)*(m-1)+m*m)*2+sqrt(n*n+m*m);
			dis2=sqrt(n*n+m*m)*2+n;
			if(dis1>dis2){
				printf("%d %d\n",n,m-1);
				printf("%d %d\n",0,0);
				printf("%d %d\n",n,m);
				printf("%d %d\n",0,1);
			}else{
				printf("%d %d\n",n,0);
				printf("%d %d\n",0,m);
				printf("%d %d\n",n,m);
				printf("%d %d\n",0,0);
			}
		}
	}

	return 0;
}
