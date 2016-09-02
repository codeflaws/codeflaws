int n,m,k,r,j;
double f[1<<18],a;
int main(int i, char *argv[]){
  scanf("%d%d%d",&n,&m,&k);
  for(;i<=m;++i)
    f[i]=f[i-1]+log(i);
  for(;j<=n;++j)
    for(i=0;i<=n;++i){
      r=n*(i+j)-i*j;
      a+=k>=r?exp(2*f[n]-f[i]-f[n-i]-f[j]-f[n-j]+f[m-r]-f[k-r]-f[m]+f[k]):0;
    }
  a=a>1e99?1e99:a;
  printf("%.9f\n",(double)a);
  return 0;
}
