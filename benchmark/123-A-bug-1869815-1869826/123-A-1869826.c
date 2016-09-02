#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int i,j,k,len,max,prime[1001],b[26],num;
    char a[1001];
    for(i=0;i<=1000;i++)prime[i]=1;
    prime[0]=0;prime[1]=0;
    for(i=2;i<=1000;i++)if(prime[i])for(j=i+i;j<=1000;j+=i)prime[j]=0;
    while(scanf("%s",a)!=EOF){
        memset(b,0,sizeof(b));
        max=0;len=strlen(a);num=0;
        for(i=0;i<len;i++){
            if((i+1)*2>len&&prime[i+1])num++;
            b[a[i]-'a']++;
            if(b[a[i]-'a']>b[max])max=a[i]-'a';
        }
        b[max]-=len-num-1;
        if(b[max]>=0){
            printf("YES\n");
            for(i=0;i<len;i++){
                if(i==0||((i+1)*2>len&&prime[i+1])){
                    for(j=0;j<26;j++)if(b[j])break;
                    b[j]--;
                    printf("%c",j+'a');
                }
                else printf("%c",max+'a');
            }
            printf("\n");
        }
        else printf("NO\n");
    }
    return 0;
}
