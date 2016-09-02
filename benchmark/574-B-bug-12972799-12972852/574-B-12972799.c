#include <stdio.h>
#include <string.h>

int map1[4001][4001];
int cnt[4001];
int main(int argc, char *argv[]) {
    int i,j,k;
    int n,m,a,b;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(map1,0,sizeof(map1));
        memset(cnt,0,sizeof(cnt));
        while(m--)
        {
            scanf("%d%d",&a,&b);
            map1[a][b]=1;
            map1[b][a]=1;
            cnt[a]++;
            cnt[b]++;
        }
        
        int temp=n+1;
        int count=0;
        int flag=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j!=i && j<=n;j++)
            {
                if(map1[i][j])
                {
                    for(k=1;k!=i && k!=j && k<=n;k++)
                    {
                        if(map1[i][k] && map1[j][k])
                        {
                            count=cnt[i]+cnt[j]+cnt[k]-6;
                            if(count<temp)
                            {
                                temp=count;
                                flag=1;
                            }
                                
                        }
                        
                    }
                }
            }
        }
        if(flag==0)
            printf("-1\n");
        else
            printf("%d\n",temp);
    }
    return 0;   
}