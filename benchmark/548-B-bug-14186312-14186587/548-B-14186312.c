#include "stdio.h"


int main(int argc, char* argv[])
{
    int n,m,q;
    scanf("%d%d%d",&n,&m,&q);
    int a[501][501];
    int i,j;
    int x,y,count[501],max[501];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=1;i<=n;i++){
        count[i]=0;
        max[i]=0;
        for(j=1;j<=m;j++){
            if(a[i][j]==1)
                count[i]++;
            else{
                if(count[i]>max[i])
                    max[i]=count[i];
            }
        }
        if(count[i]>max[i])
            max[i]=count[i];
        
    }
    
    
    while(q--){

        scanf("%d%d",&x,&y);

        if(a[x][y]==1)
            a[x][y]=0;
        else
            a[x][y]=1;
    
        count[x]=0;
        max[x]=0;
        for(j=1;j<=m;j++){
                
                if(a[x][j]==1)
                  count[x]++;
                else{
                    if(count[x]>max[x])
                        max[x]=count[x];
                    count[x]=0;
                }   
        }
        if(count[x]>max[x])
            max[x]=count[x];
        int t=-1;
        
        for(i=1;i<=n;i++){
            if(max[i]>t)
                t=max[i];
        }
        
        printf("%d\n",t);   
        
    }

            

    return 0;
}