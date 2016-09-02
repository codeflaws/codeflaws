
#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,s,i,j,p,sum=0,a[100];
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
        }
    }
    for(i=0;i<n-1;i++)
        sum=sum+a[i];
    (sum<=s)? printf("YES"):printf("NO");
    return 0;
}
