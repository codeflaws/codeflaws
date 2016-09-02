#include<stdio.h>
int main(int argc, char *argv[])
{
    int m,n,i,j,count=0,p=0;
    scanf("%d ",&n);
    int a[n],c[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);

        for(i=0;i<n;i++)
        {
            for(j=m-1;j>=0;j--)
            {
                if(b[j]>a[i])
                {
                    if(b[j]/a[i]<p)
                    break;
                    if(b[j]%a[i]==0&&b[j]/a[i]>p)
                       {
                        p=b[j]/a[i];
                        count=1;
                        continue;
                       }
                    if(b[j]%a[i]==0&&b[j]/a[i]==p)
                    {

                        count++;

                    }
                }
            }
        }
        printf("%d",count);
        return 0;
}



