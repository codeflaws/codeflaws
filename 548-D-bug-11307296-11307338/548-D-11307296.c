#include<stdio.h>
void print(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
typedef struct node
{
	int val;
	int len;
}p;
p a[200005];
int val[200005],st[200005],l[200005],r[200005];
int cmp(const void *a,const void *b)
{
	const p* x=a;
	const p* y=b;
	if((x->val)!=(y->val))
		return ((x->val)-(y->val));
	else
		return ((x->len)-(y->len));
}
void stk(int str,int it,int end,int *l)
{
	int i,j;
	st[0]=str-it;
	val[str-it]=-1;
	j=1;
	for(i=str;i!=end;i+=it)
	{
		while(j>0 && val[st[j-1]]>=val[i])
			j--	;
		st[j]=i;
		l[i]=st[j-1];
		j++;
	}
}
int main(int argc, char *argv[])
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
			scanf("%d",&val[i]);
	stk(1,1,n+1,l);
	stk(n,-1,0,r);
//print(l,n+1);
//	print(r,n+1);
	for(i=1;i<=n;i++)
	{
		a[i].val=val[i];
		a[i].len=(r[i]-l[i])-1;
	}
	qsort(a+1,n,sizeof(p),cmp);
	j=1;
	for(i=n;i>0;i--)
	{
		for(;j<=a[i].len && j<=n;j++)
			printf("%d ",a[i].val);
	}
	printf("\n");
}
