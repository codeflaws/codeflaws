long long a[4000000],d[4000],e[4000],n,i,j,v,y,z,p,q,r,s;
int main(int argc, char *argv[]){
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",a+i*n+j),d[i+j]+=a[i*n+j],e[i-j+n]+=a[i*n+j];
	y--;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			v=d[i+j]+e[i-j+n]-a[i*n+j],(i+j)&1?v>y?y=v,p=i,q=j:0:v>z?z=v,r=i,s=j:0;
	printf("%lld\n%d %d %d %d",y+z,p,q,r,s);
	return 0;
}
