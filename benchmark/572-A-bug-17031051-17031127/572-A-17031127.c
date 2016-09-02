#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define ENKsort(a) int t=strlen(a),o;while(t--){for(i=0;i<x-1;i++)if(a[i]>a[i+1]){o=a[i];a[i]=a[i+1];a[i+1]=o;}}
#define R return 0;
#define ENsort(a) int h[1000000];for(i=0;i<=1000000;i++)while(h[i]){a[s++]=i;h[i]--;}
#define and &&
#define or ||
#define buyuk(a,b) (a<b)? b:a
#define kucuk(a,b) (a<b)? a:b
int main(int argc, char *argv[]){
	int x,arr[1000005],str[1000005],i,t,z,y;
	scanf("%d %d %d %d",&x,&y,&t,&z);
	for(i=0;i<x;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<y;i++)
		scanf("%d",&str[i]);
	if(arr[t-1]>=str[y-z])
		printf("NO");
	else
		printf("YES");
	return 0;
}
