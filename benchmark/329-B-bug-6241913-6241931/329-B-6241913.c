#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int i,j,n,m,s1,s2,t1,t2,head,tail,xx,yy,sum,
    dist[1011][1011],
    di[1011][1011],
    q[2000000][2],
    dx[4]={0,0,1,-1},
    dy[4]={1,-1,0,0};

bool can[1011][1011];

char a[1100];

int pre()
{
    memset(can,false,sizeof(can));
    memset(di,0,sizeof(di));
    memset(dist,0,sizeof(dist));
    return 0;
}

int init()
{
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&a);
        for(j=0;j<m;j++)
        {
            if(a[j]=='E')
            {
                t1=i;
                t2=j;
            }
            if(a[j]=='S')
            {
                s1=i;
                s2=j;
                can[i][j]=true;
            }
            if((a[j]>='0')&&(a[j]<='9'))
            {
                can[i][j]=true;
                di[i][j]=a[j]-'0';
            }
        }
    }
    
    return 0;
}

int main(int argc, char *argv[])
{
    pre();
    init();
    head=0;tail=1;
    q[1][0]=t1;
    q[1][1]=t2;
    
   
    while(head!=tail)
    {
        head=head%2000000+1;
        for(i=0;i<4;i++)
        {
            xx=dx[i]+q[head][0];
            yy=dy[i]+q[head][1];
            if (can[xx][yy])
            {
                tail=tail%2000000+1;
                q[tail][0]=xx;
                q[tail][1]=yy;
                dist[xx][yy]=dist[q[head][0]][q[head][1]]+1;
                can[xx][yy]=false;
            }
        }
    }

    for(i=1;i<=n;i++)
        for(j=0;j<m;j++)
        {
            if((di[i][j]>0)&&(dist[i][j]<=dist[s1][s2]))
            sum+=di[i][j];
        }
     
    
        printf("%d\n",sum);
    return 0;
}
        
