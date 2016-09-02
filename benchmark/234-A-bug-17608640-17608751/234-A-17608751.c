#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    int n,i;
    char a[100];
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0;i<n/2;i++)
    {
        if(a[i]=='L')
        {
            printf("%d %d\n",i+1,i+n/2+1);
        }
        else if(a[i]=='R')
        {
                 printf("%d %d\n",i+n/2+1,i+1);
        }
    }

return 0;
}
