#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a[100][2],t,i,j;
    scanf("%d",&n);
    scanf("%d",&t);
    for(i=0;i<n;i++)
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    for(i=1;i<n;i++)
    {
                    t=7-t;
                    if(a[i][0]==t||7-a[i][0]==t||a[i][1]==t||a[i][0]==t)
                    {printf("NO\n");
                    break;
                    }
    }
    if(i==n)
    printf("YES\n");
    return 0;
}
                    
