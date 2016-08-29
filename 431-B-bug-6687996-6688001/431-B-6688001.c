#include <stdio.h>
int tt,used[6],print[6];
void dfs(int num[][6],int first,int t)
{
    int i;
    if(t==6)
    {
     //printf("tt=%d   \n");
     for(i=1;i<=5;i++)
     {
      num[tt][i]=print[i];
      //printf("%d ",print[i]);
     }
     //printf("\n");
     tt++;
     return ;
    }
    print[t]=first;
    for(i=1;i<=5;i++)
    {
        if(used[i]==0&&t<5)
        {
         used[i]=1;
         dfs(num,i,t+1);
         used[i]=0;
        }
        if(t==5)
        {
         dfs(num,0,t+1);
         break;
        }
    }

}
int main(int argc, char *argv[])
{
    int a[6],num[121][6],g[6][6],i,j,temp,maxx;
    tt=1;
    //freopen("C:\\Users\\Shen\\Desktop\\ining.txt","r",stdin);
    memset(used,0,sizeof(used));
    for(i=1;i<=5;i++)
    {
     used[i]=1;
     dfs(num,i,1);
     used[i]=0;
    }
    //printf("%d\n",tt);
    while(~scanf("%d%d%d%d%d",&g[1][1],&g[1][2],&g[1][3],&g[1][4],&g[1][5]))
    {
        for(i=2;i<=5;i++)
         for(j=1;j<=5;j++)
          scanf("%d",&g[i][j]);
        //for(i=1;i<=5;i++)
        //{
        // for(j=1;j<=5;j++)
        //  printf(" %d",g[i][j]);
        // printf("\n");
        //}
        maxx=-1;
        for(i=1;i<=120;i++)
        {
            temp=g[num[i][1]][num[i][2]]+g[num[i][2]][num[i][1]]+2*g[num[i][3]][num[i][4]]+2*g[num[i][4]][num[i][3]]+g[num[i][2]][num[i][3]]+g[num[i][3]][num[i][2]]+2*g[num[i][4]][num[i][5]]+2*g[num[i][5]][num[i][4]];
            //printf("temp=%d\n",temp);
            if(temp>maxx) maxx=temp;
        }
        printf("%d\n",maxx);
    }
    return 0;
}
