#include"stdio.h"

int main(int argc, char *argv[])
{
    int f,temp,x[1200]={0},w[1200]={0},i,m,t,r,ans=0,j,z;
    scanf("%d%d%d",&m,&t,&r);
    for(i = 0;i < m ; ++i){
        scanf("%d",&temp);
        if(x[temp+600]>=r)continue;
        int shit = x[temp+600];
        for(j = 0;j<r-shit;++j){
            int s = t - 1;
            for(z = temp - 1 + 600; s > -1;--s,--z){
                if(w[z] == 0){
                    w[z] = 1;
                    ++ans;
                    for(f = z ; f-z<t ;++f)
                        ++x[f];
                    break;
                }
            }
        }
        if(r-x[temp+600]>0){
            printf("-1");
            return 0;
        }
    }
    printf("%d",ans);
    return 0;
}
