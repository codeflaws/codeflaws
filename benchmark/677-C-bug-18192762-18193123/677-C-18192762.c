#include <stdio.h>

char s[100100];
int pw;
long long int ans;

int zero(int k) {
    int sum=0;
    for(int j=0;j<6;j++) {
        sum+=k%2;
        k/=2;
    }
    return sum;
}

int main(int argc, char *argv[]) {
    int i=0;
    scanf("%s", s);
    while(s[i]) {
        if(s[i]>='0' && s[i]<='9') pw+=zero(s[i]-'0');
        if(s[i]>='A' && s[i]<='Z') pw+=zero(s[i]-'A'+10);
        if(s[i]>='a' && s[i]<='z') pw+=zero(s[i]-'a'+36);
        if(s[i]=='-') pw++;
        i++;
    }
    ans=1;
    for(int j=0;j<pw;j++) {
        ans*=3;
        ans%=1000000007;
    }
    printf("%I64d", ans);
    return 0;
}
