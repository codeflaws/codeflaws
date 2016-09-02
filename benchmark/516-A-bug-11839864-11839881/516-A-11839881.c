#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main(int argc, char *argv[])
{
	char s[105];
	int n,a[10000],c=0,i;
	scanf("%d\n%s",&n,s);
	for(i=0;i<n;i++)
		if(s[i]=='9')
		{
			a[c]=3;
			a[c+1]=3;
			a[c+2]=2;
			a[c+3]=7;
			c+=4;
		}
		else if(s[i]=='8')
		{
			a[c]=2;
			a[c+1]=2;
			a[c+2]=2;
			a[c+3]=7;
			c+=4;
		}
		else if(s[i]=='6')
		{
			a[c]=3;
			a[c+1]=5;
			c+=2;
		}
		else if(s[i]=='4')
		{
			a[c]=2;
			a[c+1]=2;
			a[c+2]=3;
			c+=3;
		}
		else if(s[i]=='0' || s[i]=='1');
		else
		{
			a[c]=s[i]-'0';
			c++;
		}
	qsort(a,c,sizeof(int),cmpfunc);
	for(i=c-1;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}
