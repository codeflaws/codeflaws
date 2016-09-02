#include<stdio.h>
#include<string.h>

char mm[32];
char s[100001];
int a[100000];
int c[32];
int n;

int main(int argc, char *argv[]) {
        int i,ret=0,j,k;
        scanf("%s",s);
        scanf("%d",&n);
        for(i=0;i<n;i++) {
                char t[4];
                scanf("%s",t);
                mm[t[0]-'a']=t[1];
                mm[t[1]-'a']=t[0];
        }
        a[0]=1;
        for(i=j=1;s[i];i++) {
                if (s[i]==s[i-1]) a[j]++; else s[j]=s[i],a[j]=1,j++;
        }
        for(i=1,k=0;i<j;i++) {
                if (s[i-1]!=mm[s[i]-'a']) {
                        if (k) {
                                if (c[s[i-1]-'a']<c[mm[s[i-1]-'a']-'a']) ret+=c[s[i-1]-'a'];
                                else ret+=c[mm[s[i-1]-'a']-'a'];
                                memset(c,0,sizeof(c));
                                k=0;
                        }
                } else {
                        if (!k) c[s[i-1]-'a']+=a[i-1];
                        k=1;
                        c[s[i]-'a']+=a[i];
                }
        }
        if (k) {
                if (c[s[i-1]-'a']<c[mm[s[i-1]-'a']-'a']) ret+=c[s[i-1]-'a'];
                else ret+=c[mm[s[i-1]-'a']-'a'];
        }
        printf("%d\n",ret);
        return 0;
}
