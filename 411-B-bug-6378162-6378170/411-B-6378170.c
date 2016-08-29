#define rep(i,a,b) for(i=a;i<b;++i)
#define get(a) scanf("%d",&a)
int arr[101][101];
int mem[101], cor[101];
int main(int argc, char *argv[])
{
    int n,m,k,i,j;
    get(n);get(m);get(k);
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            get(arr[i][j]);
        }
    }

    rep(i, 0, m)
    {
        int cont[101] = {};
        rep(j, 0, n)
        {
            int x = arr[j][i];
            if (x && !cor[j])
                cont[x]++;
        }
        rep(j, 0, n) if ((cont[arr[j][i]] > 1 || mem[arr[j][i]]) && !cor[j])cor[j] = i + 1, mem[arr[j][i]] = 1;
    }
    rep(i, 0, n)printf("%d\n", cor[i]);return 0;
}