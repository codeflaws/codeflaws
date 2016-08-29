int main(int argc, char *argv[]){
    int n,m,k,i,j;
    scanf("%d%d%d",&n,&m,&k);
    int ar[n];
    for(i=0;i<n;i++) scanf("%d",&ar[i]);
    if(!(n&1)){ printf("0\n");return 0;}
    int p=(n+1)>>1;
    m/=p;
    int min=1<<29;
    for(i=0;i<n;i+=2){min=min<ar[i]?min:ar[i];}
    printf("%d\n",(((long long)m)*k)<min?(((long long)m)*k):min);
    return 0;
}
