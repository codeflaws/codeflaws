#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,i,j,p=0,q=0,k=0;
    char a[50];
    scanf("%d",&n);
    getchar();
    gets(a);
    for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
    {
        if((a[i]!='7' && a[i]!='4') || (a[j]!='7' && a[j]!='4'))
            {
                k=0;
                break;
            }
        else
        {
            p=p+a[i];
            q=q+a[j];
            k++;
        }
    }
    if(k>0 && p==q)
        printf("YES");
    else
        printf("NO");
    return 0;
}
