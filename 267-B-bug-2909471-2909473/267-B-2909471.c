#include<stdio.h>

int n,v,ans;
int x[111],y[111],map[111][111],degree[111],ansx[111],ansy[111];

void dfs(int v)
{
     int i;
     
     for(i=0;i<=6;i++)
       if(map[v][i])
         {
           map[v][i]--;
           map[i][v]--;
           dfs(i);
           ans++;
           ansx[ans]=v;
           ansy[ans]=i;
         }
     
     return;
}

int main(int argc, char *argv[])
{
    int i,j;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        scanf("%d%d",&x[i],&y[i]);
        map[x[i]][y[i]]++;
        map[y[i]][x[i]]++;
        degree[x[i]]++;
        degree[y[i]]++;
      }
    
    for(i=0;i<=6;i++)
      if(degree[i])
        v=i;
    j=0;
    for(i=0;i<=6;i++)
      if(degree[i]%2==1)
        {
          v=i;
          j++;
        }
    if(j==1||j>2)
      {
        printf("No solution\n");
        return 0;
      }
    
    ans=0;
    dfs(v);
    
    if(ans<n)
      {
        printf("No solution\n");
        return 0;
      }
    
    for(i=n;i>=1;i--)
      for(j=1;j<=n;j++)
        if(ansx[i]==y[j]&&ansy[i]==x[j])
          {
            printf("%d -\n",j);
            x[j]=-1;
            break;
          }
          else if(ansx[i]==x[j]&&ansy[i]==y[j])
                 {
                   printf("%d +\n",j);
                   x[j]=-1;
                   break;
                 }
    
    system("pause");
    return 0;
}
