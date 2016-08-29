//
//  Puzzles
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n ,m ,i,j;
    scanf("%d%d\n",&n ,&m);
    int a[m];
    for (i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<m;i++)
    {
        for (j=i+1;j<m;j++)
        {
            if (a[i] < a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        
        }
    
    }
    int y = a[n-1]-a[0];
    for(int i=1;i<m;i++)
        for(int j=i+n-1;j<m;j++)
            if(a[i]-a[j] < y)
                y=a[i]-a[j];

    
    printf("%d\n",y);
    return 0;
}