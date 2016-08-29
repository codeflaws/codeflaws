#include <stdio.h>


int main(int argc, char *argv[])
{
    long long int n,i,j,a,ans;
    int cnt=0;
    scanf("%I64d",&n);
    i = n;
    for(n;n>0;n=n/10) {
        a = n%10;
        cnt++;
    }
    //printf("cnt = %d",cnt);

    if(cnt==1) {
        printf("%I64d",i);
    }
    if(cnt==2) {
        ans = 9+(i-9)*2;
        printf("%I64d",ans);
    }
    else if(cnt==3) {
        ans = 189+(i-99)*3;
        printf("%I64d",ans);
    }
    else if(cnt==4) {
        ans = 2889+(i-999)*4;
        printf("%I64d",ans);
    }
    else if(cnt==5) {
        ans = 38889+(i-9999)*5;
        printf("%I64d",ans);
    }
    else if(cnt==6) {
        ans = 488889+(i-99999)*6;
        printf("%I64d",ans);
    }

    else if(cnt==7) {
        ans = 5888889+(i-999999)*7;
        printf("%I64d",ans);
    }
    else if(cnt==8) {
        ans = 68888889+(i-9999999)*8;
        printf("%I64d",ans);
    }
    else if(cnt==9) {
        ans = 788888889+(i-99999999)*9;
        printf("%I64d",ans);
    }
    else if(cnt==10) {
        ans = 8888888889+(i-999999999)*10;
        printf("%I64d",ans);
    }

    return 0;


}
