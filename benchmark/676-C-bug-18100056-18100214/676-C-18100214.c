#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define MAXN 200000
char s[MAXN];
long long a[MAXN],b[MAXN];

int main(int argc, char *argv[])
{
	long long N,i,j,k,T;
	scanf("%I64d%I64d\n",&N,&T);
	for(i=1;i<=N;i++){
		scanf("%c",&s[i]);
		if(s[i]=='a'){
			a[i]=a[i-1]+1;
			b[i]=b[i-1];
		}
		else{
			a[i]=a[i-1];
			b[i]=b[i-1]+1;
		}
	}
	long long l=1,r=N+1,mid,flag,ans=0;
	while(l+1<r){
		flag=0;
		mid=(l+r)/2;
	for(i=0;i+mid<=N;i++)
		if(a[i+mid]-a[i]<=T||b[i+mid]-b[i]<=T){
			flag=1;
			break;
		}
		if(flag==1)
		l=mid;
		else
		r=mid;
	}
	printf("%I64d",l);
	return 0;
}