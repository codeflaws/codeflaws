#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int n,i,ch=0,bi=0,ba=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i=i+3)
        ch = ch +a[i];
    for(i=1;i<n;i=i+3)
        bi = bi +a[i];
    for(i=2;i<n;i=i+3)
        ba = ba +a[i];
    if(ch>bi && ch> ba)
        printf("chest");
    else if(bi>ba && bi>ch)
        printf("biceps");
    else
        printf("back");
        return 0;
}