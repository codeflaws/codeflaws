#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int problem[n],set[m];
    for(i=0;i<n;i++)
        scanf("%d",&problem[i]);
    for(i=0;i<m;i++)
        scanf("%d",set[i]);
    i=j=0;
    while(i<n&&j<m)
    {
        if(set[j]>=problem[i])
        {
            i++;
            j++;
        }
        else
            j++;
    }
    printf("%d",n-i);
    return 0;
}
