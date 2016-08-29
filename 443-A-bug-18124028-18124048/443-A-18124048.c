#include <stdio.h>
#include <stdlib.h>
#include<string.h>>
int main(int argc, char *argv[])
{
    char a[1005],b[1005];
    int ans=0,s=0,j,l,i,k=0,z;
    gets (a);
    l=strlen(a);
    if (a[1]=='}')
    {
        printf("0");
        return 0;
        ans=1;
    }
    if (ans==0)
    {
        ans=1;
        b[0]=a[1];
        s=1;
    for (i=4;i<l;i=i+3)
    {
        b[s]=a[i];
        s++;
        for (j=0;j<s-1;j++)
        {
            if (a[i]==b[j])
            {
                z=0;
                break;
            }
            else
                {
                    z=1;
                }
        }
        if (z==1)
            ans++;
    }
    }
    printf("%d",ans);
    return 0;
}
