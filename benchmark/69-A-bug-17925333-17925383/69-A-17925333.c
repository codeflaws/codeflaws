#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,n,m[3]={0,0,0},j,c;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	for(j=0;j<3;j++)
	{
		scanf("%d",&c);
		m[j]+=c;
	}
	
	if(m[0] + m[1] + m[2] ==0) printf("YES");
	else printf("NO");
        return 0;
}
