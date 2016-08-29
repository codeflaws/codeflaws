#include<stdio.h>
int main(int argc, char *argv[])
{
    char str1[]="abcdefghijklmnopqrstuvwxyz";
    int n,k,i,j=0,d;
    scanf("%d %d",&n,&k);
    if(n<k)
        printf("-1");

    else if(n>k && k==1)
        printf("-1");
    else if(n=1 && k==1)
        printf("a");
    else
    {
        d=k-2;
        for(i=0;i<n-d;i++)
        {
            printf("%c",str1[j]);
            if(j==0)
                j=1;
            else if(j=1)
                j=0;
        }
        for(j=2;j<2+d;j++)
            printf("%c",str1[j]);
    }
return 0;
}
