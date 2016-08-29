#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,m,n,ans,flag;
    int a[100];
    scanf("%d %d",&n,&m);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        flag =0;
        for(i =0; i<n;i++)
        {
            if(a[i] > 0)
            {
            a[i] = m;
            flag = 1;
            ans = i +1;
            }
        }
        if(flag == 0)
            break;
    }
    printf("%d",ans);
    return 0;
}
