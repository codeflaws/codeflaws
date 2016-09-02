#include<stdio.h>
int main(int argc, char *argv[])
{
    int t,i,n,a[500],ch,flag,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    flag=1;
    i=0;
    while(1)
    {
        if(a[i])
        {
            printf("P");
            a[i]--;
        }
        if(flag&&i<n-1)
        {
            i++;
            printf("R");
        }
        else if(flag&&i==n-1)
        {
            i--;
            printf("L");
        }
        else if(flag==0&&i>0)
        {
            i--;
            printf("L");
        }
        else
        {
            i++;
            printf("R");
        }
        ch=0;
        for(j=0;j<n;j++)
        if(a[j])
        ch=1;
        if(ch==0)
        break;
    }
    return 0;
}