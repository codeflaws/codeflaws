#include <stdio.h>
#include <string.h>
#define NUM 300005
int a[2*NUM],vis[5005];
struct node{
    int start,end;
}MM[NUM];
int main(int argc, char *argv[])
{
    int i,n,count;
    scanf("%d",&n);
        for(i=1; i<=2*n; ++i)
        {
            scanf("%d",&a[i]);
        }
        memset(vis,-1,sizeof(vis));
        count =0;
        for(i=1; i<=2*n; ++i)
        {
            if(vis[a[i]] == -1)
            {
                vis[a[i]] = i;
            }
            else
            {
                count++;
                MM[count].start = i;
                MM[count].end = vis[a[i]];
                vis[a[i]] = -1;
            }
        }
        if(count < n)
        {
            printf("-1\n");
        }
        else 
        {
            for(i=1; i<=count; ++i)
            {
                printf("%d %d\n",MM[i].start,MM[i].end);
            }
        }
    return 0;
}