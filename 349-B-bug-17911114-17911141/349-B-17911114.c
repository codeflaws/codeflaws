#include <stdio.h>

int main(int argc, char *argv[]){
	int n,len=0,mn=0,in=0;
	scanf("%d",&n);
	int l[10]={};
	for(int i=1;i<10;i++){
		scanf("%d",&l[i]);
		if(l[i]<=mn || mn==0){
			mn=l[i];
			len=n/l[i];
			in=i;
		}
	}
	if(len==0){
		printf("-1");
	}else{
		char x[n];
		n-= mn * len;
		for(int i=1;i<10;i++) l[i]-=mn;
		for(int i=0;i<len;i++){
			int mx = in;
			for(int j=1;j<10;j++){
				if(n==0) break;
				if(j>mx && n>=l[j]) mx = j;
			}
			n-=l[mx];
			x[i]=(mx + '0');
		}
		printf("%s",x);
	}
	return 0;
}
