#include<stdio.h>
int main(int argc, char *argv[])
{int min,max,result=0,street;
int i,j,n,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {min=999999999;
        for(j=1;j<=m;j++)
        {
            scanf("%d",&street);
            if(street<=min)
                min=street;
        }

        if(result<min)
            result=min;
    }
    printf("%d\n",result);
    return 0;
}
