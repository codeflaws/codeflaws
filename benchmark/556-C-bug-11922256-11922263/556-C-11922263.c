#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,m,count=0,l=1,i,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&m);
        int array[m];
        for(j=0;j<m;j++)
            scanf("%d",&array[j]);
        if(array[0]==1)
        {
            j=1;
            while(j<m&&array[j]==(array[j-1]+1))
                j++;
            if(j!=m)
                count=count+m-j;
            l=j;
        }
        else
            count=count+m-1;
    }
    count=count+n-l;
    printf("%d",count);
    return 0;
}
