#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int n,k=0,i,l,cnt[100]={0},q=0;long long ans=1;
char s[1000001];
gets(s);//if(s[0]=='B'){printf("%c",s[1]);}
if(s[0]=='?'||('A'<=s[0]&&s[0]<='J')){//printf("%llu  %d",ans,cnt[s[1]]);
ans=9;
if('A'<=s[0]&&s[0]<='J'){cnt[s[0]]++;k++;}}
n=strlen(s);
for(i=1;i<n;i++){
if(s[i]=='?'){q++;//ans*=10;//printf("111 %llu  %d",ans,cnt[s[1]]);
}
else if('A'<=s[i]&&s[i]<='J'){if(cnt[s[i]]==0){cnt[s[i]]++;if(k==0){q++;}else{ans*=(10-k);k++;}
//printf("%llu  %d",ans,cnt[s[1]]);
}}
}
printf("%llu",ans);for(i=0;i<q;i++){printf("0");}
return 0;}