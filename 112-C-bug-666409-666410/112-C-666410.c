typedef long long LL;
LL n,i,j,k,x,y,cnt;
int main(int argc, char *argv[]){
    scanf("%lld%lld%lld",&n,&x,&y);
    if(y<n) printf("-1");
    else{
        cnt=(n-1)+(y-n+1)*(y-n+1);
        if(cnt>=x){
            for(i=1;i<n;i++) putchar('1'),putchar('\n');
            printf("%d",y-n+1);
        }
        else printf("-1");
    }
    return 0;
}
