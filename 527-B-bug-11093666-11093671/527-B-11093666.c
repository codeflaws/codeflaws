#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef long long ll;
//messiiii messiii <3
char s[200001],t[200001];
int len;
int main(int argc, char *argv[]) {
   // freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);   
    //int tt; scanf("%d",&tt);
    //while(tt--)
    {
        scanf("%d%s%s",&len,s,t);
        int map[26][26]={{0}},i,ans=0,j;
        int vis[26]={0};
        for(i=0;i<len;i++)
        {
            if(s[i]!=t[i])
            {
                ++ans;
                map[s[i]-'a'][t[i]-'a']=i+1;
                //such a pair exists..
                vis[s[i]-'a']=i+1;
            }
        }
        for(i=0;i<26;i++)
            for(j=0;j<26;j++)
                if(map[i][j]&&map[j][i])//both pairs exist
                {
                    printf("%d\n%d %d",ans-2,map[i][j],map[i][j]);
                    return 0;
                }
        for(i=0;i<26;i++)
            for(j=0;j<26;j++)
            {
                if(map[i][j]&&vis[j])
                {
                    printf("%d\n%d %d",ans-1,map[i][j],vis[j]);
                    return 0;
                }
            }
        printf("%d\n-1 -1",ans);
    }//while for test cases
    return 0;
}