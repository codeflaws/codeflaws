int main(int argc, char *argv[]){
    int a,b,mod;
    char ans[10];
    scanf("%d%d%d",&a,&b,&mod);
    int i,j;
    int p = 1;
    for(i=1;i<=9;i++) p = (p*10)%mod;
    for(i=0;i<=a;i++){
        int m = ((long long)i*p)%mod;
        m = (mod - m)%mod;
        if(m > b){
            //printf("I = %d\n",i);
            printf("1");
            int k = 8;
            for(j=0;j<=8;j++) ans[j]='0';
            for(j=i;j;j/=10) ans[k--]=(j%10)+'0';
            ans[9]='\0';
            printf(" %s\n",ans);
            return 0;
        }
    }
    puts("2");
    return 0;
}
