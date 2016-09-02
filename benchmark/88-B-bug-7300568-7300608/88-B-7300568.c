#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char key[50][50];
int mark[99999],x,m,n;

int search(int a,int b)
{
    int i,j,p,q;
    for(i=0;i<m;i++)
    {
        p=a-i;
        if(p*p>x*x)break;
        for(j=0;j<n;j++)
        {
            q=b-j;
            if(p*p+q*q>x*x)
            {
                if(j<b)
                    continue;
                else
                    break;
            }
            if(key[i][j]=='S')
                return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int i,j,len,s,t,w;
    char k;
    while(scanf("%d%d%d",&m,&n,&x)!=EOF)
    {
        s=t=w=0;
        for(i=0;i<m;i++)
        {
            getchar();
            for(j=0;j<n;j++)
            {
                scanf("%c",&key[i][j]);
                if(key[i][j]=='S')
                    w=1;
            }
        }
        scanf("%d",&len);
        getchar();
        memset(mark,-1,sizeof(mark));
        while(len--)
        {
            scanf("%c",&k);
            if(t==1)continue;
            if(mark[k-'A']==-1)
            {
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        if(k!='S'&&k==key[i][j])
                        {
                            mark[k-'A']=1;
                            break;
                        }
                        else if(k==key[i][j]-32)
                        {
                            if(w==1)
                            {
                                mark[k-'A']=search(i,j);
                            }
                            if(mark[k-'A'])
                                break;
                        }
                    }
                    if(mark[k-'A']==1)break;
                }
            }
            if(mark[k-'A']==0)
            {
                s++;
            }
            else if(mark[k-'A']==-1)
                t=1;
        }
        if(t==0)
            printf("%d\n",s);
        else
            printf("-1\n");
    }
    return 0;
}
