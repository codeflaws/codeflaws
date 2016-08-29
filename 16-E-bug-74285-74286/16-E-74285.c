int n;
double ans[1<<18][18],a[18][18];
int main(int argc, char *argv[])
{
    int i,j,w,mask;
    double tmp;
    scanf("%d",&n);
    w=(1<<n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%lf",&a[i][j]);
    for(mask=1; mask<w; mask++)
    {
        if(__builtin_popcount(mask)==1)
        {
            ans[mask][__builtin_popcount(mask-1)]=1;
            continue;
        }
        for(i=0; i<n; i++)if(mask&(1<<i))
        {
            tmp=0;
            for(j=0; j<n; j++)
                if(j!=i && mask&(1<<j))
                    tmp+=a[j][i];
            for(j=0; j<n; j++)
                if(j!=i && mask&(1<<j))
                    ans[mask][j]+=tmp*ans[mask-(1<<i)][j];
        }
    }
    for(i=2; i<=n; i++)
        tmp*=i*(i-1)/2;
    for(i=0; i<n; i++)
        printf("%.6lf ",ans[w-1][i]/tmp);
    return 0;
}
