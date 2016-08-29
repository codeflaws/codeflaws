#include<stdio.h>
char ans[4000][4000];
int main(int argc, char *argv[])
{
//    freopen("x.txt","w",stdout);
    int n,arr[1005],i,q;
    for(i=0;i<4000;++i)
    {
        for(q=0;q<4000;++q)
            ans[i][q]=' ';
    }
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
    int max=arr[0];
    int temp=0;
    for(i=0;i<n;++i)
    {
        if(i%2==0)
            temp+=arr[i];
        else
            temp-=arr[i];
        if(temp>max)
            max=temp;
    }
    int j,x=max-1,y=0;
    int tut=0;
    for(i=0;i<n;++i)
    {
        if(i%2==0)
        {
            if(tut<x)
                tut=x;
            for(j=0;j<arr[i];++j)
                ans[x--][y++]='/';
            ++x;
        }
        else
        {
            for(j=0;j<arr[i];++j)
            {
                if(tut<x)
                    tut=x;
                ans[x++][y++]=(char)92;
            }
            --x;
        }
    }
    for(i=0;i<=tut;++i)
    {
        for(j=0;j<y;++j)
            printf("%c",ans[i][j]);
        if(i<tut)
            printf("\n");
    }
    return 0;
}
