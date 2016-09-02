#include<stdio.h>
#include<string.h>

char str[100000];
int a[100000];

int main(int argc, char *argv[]) {
	int n,m=0,i,j,s;
	scanf("%d",&n);
	gets(str);gets(str);
	for(i=j=0;str[i];i++) {
		if (str[i]=='.' || str[i]=='!' || str[i]=='?') a[m++]=j,j=0,i++;
		else j++;
	}
	for(s=-1,i=j=0;i<m;i++) {
		if (a[i]>n) {
			puts("Impossible");
			return 0;
		}
		if (s+1+a[i]<=n) s+=1+a[i];
		else s=a[i],j++;
	}
	if (s>0) j++;
	printf("%d\n",j);
	return 0;
}
