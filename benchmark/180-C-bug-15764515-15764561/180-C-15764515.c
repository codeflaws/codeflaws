#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char a[100005];
	int i,n,u=0,l=0,u1=0,l1=0,ans=0,c;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]>=65 && a[i]<91)
		u++;
		else
		l++;
	}
	for(i=n-1;i>=0;i--){
		c=l-l1+u1;
		if(i==n-1)
		ans=c;
		else if(c<ans)
		ans=c;
		if(a[i]>=65 && a[i]<91)
		u1++;
		else
		l1++;
	}
	printf("%d\n",ans);
	return 0;
}
