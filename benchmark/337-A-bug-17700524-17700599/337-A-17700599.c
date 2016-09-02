#include<stdio.h>
#define pp printf
#define ss scanf
#define min(a,b) ((a)<(b)) ? (a) : (b)
#define max(a,b) ((a)>(b)) ? (a) : (b)
int st,pz,a[1044],r[1044],i;
void merge(int bas,int son,int ort){
	int yer=bas,x=bas,y=ort+1,t,i;
	while(x<=ort && y<=son){
		if(a[x]< a[y])
			r[yer++]=a[x++];
		else
			r[yer++]=a[y++];
	}
	while(x <= ort) r[yer++]=a[x++];
	while(y <= son) r[yer++]=a[y++];
	for(i=bas;i<=son;i++) a[i]=r[i];}
	int sort(int bas,int son){
		if(son<=bas) return 0;
		int ort=(bas+son)/2;
		sort(bas,ort);
		sort(ort+1,son);
		merge(bas,son,ort);
		return 0;
	}

int main(int argc, char *argv[]){
	int mn=9999;
	ss("%d%d",&st,&pz);
	for(i=0;i<pz;i++)
		ss("%d",a+i);
	sort(0,pz-1);
	for(i=0;i<pz-st+1;i++)
		mn=min(mn,a[i+st-1]-a[i]);
	pp("\n%d",mn);
	return 0;
}
