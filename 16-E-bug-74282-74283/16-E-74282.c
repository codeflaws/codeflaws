int n;
char f[1<<18];
double ans[1<<18][18],a[18][18];
void dfs(mask)
{
	if(f[mask])return;
	int i,j,w=__builtin_popcount(mask);
	double tmp;
	f[mask]=1;
	if(w==1)
	{
		ans[mask][__builtin_popcount(mask-1)]=1;
		return;
	}
	for(i=0; i<n; i++)
		if(mask&(1<<i))
		{
			dfs(mask-(1<<i));
			tmp=0;
			for(j=0; j<n; j++)
				if(j!=i && mask&(1<<j))
					tmp+=a[j][i];
			for(j=0; j<n; j++)
				ans[mask][j]+=tmp*ans[mask-(1<<i)][j];
		}
	for(j=0; j<n; j++)
		ans[mask][j]/=w/2.0;
}
int main(int argc, char *argv[])
{
	int i,j;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%lf",&a[i][j]);
	dfs((1<<n)-1);
	for(i=0; i<n; i++)
		printf("%.6lf ",ans[(1<<n)-1][i]);
	return 0;
}
