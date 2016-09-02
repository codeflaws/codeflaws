int main(int argc, char *argv[])
{
    int n,i,a[123456];
    scanf("%d",&n);
    for(i=1;i<=n;i++)    scanf("%d",&a[i]);
    for(i=n;i>=1;i--)
    if(a[i]>a[i-1]) ;
    else    break;
    printf("%d\n",i-1);
    return 0;
}
