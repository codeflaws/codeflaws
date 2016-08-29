#include <stdio.h>
#include <string.h>
typedef long long LL;

int main(int argc, char *argv[])
{
	int a,b,n,m; scanf("%d %d",&n,&m);
	int auc[n],ques[n], auc_q[m];
	memset(auc,0,sizeof(int)*n);
	for(a=0;a<n;a++) scanf("%d",&ques[a]);
	int c;
	for(a=0;a<m;a++) { scanf("%d",&c); auc[c-1] = 1; auc_q[a] = ques[c-1]; }
	LL ans = 0;
	for(a=0;a<n;a++)
	{
		if(!auc[a])
			ans += ques[a];
	}
	for(a=0;a<m;a++)
	for(b=0;b<m-1;b++)
		if(auc_q[b] < auc_q[b+1])
		{
			int tmp = auc_q[b];
			auc_q[b] = auc_q[b+1];
			auc_q[b+1] = tmp;
		}
	for(a=0;a<m;a++)
	{
		if(ans > auc_q[a]) ans <<= 1;
		else ans += auc_q[a];
	}
	printf("%lld\n",ans);

}
