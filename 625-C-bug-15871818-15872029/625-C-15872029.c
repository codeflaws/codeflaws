#include<stdio.h>
int a[501][501];
int n,k,i,j,tmp;
int sum=0;
int main(int argc, char *argv[]){
        scanf("%d%d",&n,&k);
        tmp=(k-1)*n;
        for(i=1;i<=tmp;++i){
                int x,y;
                x=i/(k-1)+1;
                if (i%(k-1)==0) x--;
                y=i%(k-1);
                if (y==0) y=k-1;
                a[x][y]=i;
        }

        for(i=tmp+1;i<=n*n;++i){
                int x,y;
                x=(i-tmp)/(n-k+1)+1;
                if ((i-tmp)%(n-k+1)==0) x--;
                y=(i-tmp)%(n-k+1)+k-1;
                if (y==k-1) y=n;
                a[x][y]=i;
        }
        for(i=1;i<=n;++i){
                sum+=a[i][k];
        }
        printf("%d\n",sum);
        for(i=1;i<=n;++i){
                for(j=1;j<=n;++j){
                        if (j!=n) printf("%d ",a[i][j]);
                        else printf("%d\n",a[i][j]);
                }
        }
        return 0;
}
