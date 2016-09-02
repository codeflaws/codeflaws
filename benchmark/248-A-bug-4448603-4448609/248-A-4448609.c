#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n,i,j,c=0,d=0,x=0;
    int a[10000][2];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
         scanf("%d",&a[i][j]);


    for(i=0;i<n;i++)
    {
        if(a[i][0]==0)
            c++;
        else
            d++;
    }
    if(c>d)
        x=d;
    else
        x=c;
      // printf("%d",x);
        c=0;
        d=0;
        for(i=0;i<n;i++)
        {
            if(a[i][1]==0)
                c++;
            else

                d++;
        }
        if(c>d)
        x+=d;
    else
        x+=c;
        printf("%d",x);
        return 0;
        }
