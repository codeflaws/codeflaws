#include<stdio.h>

int main(int argc, char *argv[])
{
    int s,n,i,j,suc=0,temp;
    scanf("%d %d",&s,&n);
    int x[n][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&x[i][j]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(x[i][0]>x[j][0])
            {
                temp=x[i][0];
                x[i][0]=x[j][0];
                x[j][0]=temp;
                temp=x[i][1];
                x[i][1]=x[j][1];
                x[j][1]=temp;
            }
    /*for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            printf("x[%d][%d]=%d\n",i,j,x[i][j]);*/
    if(s<=x[0][0])
        suc=1;
    else
    {
        //temp=0;
        for(i=1;i<n&&suc==0;i++)
        {
            s+=(x[i-1][1]);
            if(x[i][0]>(s))
            {
                suc=1;
            }
        }
    }
    if(suc==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
