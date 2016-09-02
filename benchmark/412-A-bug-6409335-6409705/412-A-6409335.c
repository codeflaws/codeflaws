#include <stdio.h>
 
int main(int argc, char *argv[]) {
    int i,j,k,n,mid=0;
    char a[101];
 
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%s",a);
        mid=n/2;
    if(k>mid)
    {
        for(i=k;i<n;i++)
        printf("RIGHT\n");
        for(i=n-1;i>=0;i--)
        {
        printf("Print %c\n",a[i]);
        if(i!=0)
        printf("LEFT\n");
        }
 
    }
    else if(k<mid)
    {
        for(i=k;i>1;i--)
        printf("LEFT\n");
        for(i=0;i<n;i++)
        {
        printf("PRINT %c\n",a[i]);
        if(i!=n-1)
        printf("RIGHT\n");
        }
    }
    else
    {
        if((n-k)>1)
        for(i=k;i>1;i--)
        printf("LEFT\n");
            for(i=0;i<n;i++)
        {
        printf("PRINT %c\n",a[i]);
        if(i!=n-1)
        printf("RIGHT\n");
        }
    }
    return 0;
}