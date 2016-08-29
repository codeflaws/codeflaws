#include<stdio.h>
#define pp printf
#define ss scanf
#define min(a,b) ((a)<(b)) ? (a) : (b)
#define max(a,b) ((a)>(b)) ? (a) : (b)
	int i,n,t,t1,c,a[55],r[55],d[55],lima,rade;
int main(int argc, char *argv[]){
	ss("%d%d",&n,&c);
	if(n==1){
		pp("Tie");
		return 0;
	}

	for(i=0;i<n;i++)
		ss("%d",a+i);
	for(i=0;i<n;i++){
		ss("%d",r+i);
		t+=r[i];
		lima+= ((a[i]-(t*c))>0) ? a[i]-(t*c) : 0;
	}
	t=0;
	for(i=n;i>0;i--){
		t+=r[i];
		rade+= ((a[i]-(t*c))>0) ? (a[i]-(t*c)) : 0;
	}
//	pp("%d %d",lima,rade);
	if(lima==rade)
		pp("Tie");
	else
		pp((lima>rade) ? "Limak" : "Radewoosh");




	return 0;
}
