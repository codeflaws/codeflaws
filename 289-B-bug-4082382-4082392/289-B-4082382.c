#include<stdio.h>
int main(int argc, char *argv[])
{
    int d,m,n,i,j,mark,count,min=0,k=0;
    scanf("%d %d %d",&m,&n,&d);
    int a[m*n];
    for(i=0;i<m*n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m*n;i++)
    {
        if(a[0]!=a[i])
        break;
        else
        k++;
    }
    if(k==m*n)
    {
        printf("-1");
        return 0;
    }
    for(i=0;i<m*n;i++)
    {
        count=0;
        mark=a[i];
        for(j=0;j<m*n;j++)
        {

            if(a[j]==mark)
            continue;
            else if(a[j]>mark)
            {
                if ((a[j]-mark)%d==0)
                count=count+((a[j]-mark)/d);
                else
                {
                    min=0;
                    break;
                }
            }
            else
            {
                if((mark-a[j])%d==0)
                count=count+((mark-a[j])/d);
                else
                {
                    min=0;
                    break;
                }
            }
        }
        if(i==0)
        min=count;
        if(count==0)
        continue;
        if(min>count)
        min=count;
    }
    if(min==0)
    printf("-1");
    else
    printf("%d",min);
    return 0;
}
