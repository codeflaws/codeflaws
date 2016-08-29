int n,m,k,r,j;
long double f[1<<18],a;
int main(int i, char *argv[]){
  for(scanf("%d%d%d",&n,&m,&k);i<=m;f[++i]=f[i-1]+log(i));
  for(;j<=n;++j)
    for(i=n;i+1;--i)
      a+=k>=(r=n*(i+j)-i*j)?exp(2*f[n]-f[i]-f[n-i]-f[j]-f[n-j]+f[m-r]-f[k-r]-f[m]+f[k]):0;
  printf("%.9f\n",a>1e99?1e99:(double)a);
  return 0;
}
