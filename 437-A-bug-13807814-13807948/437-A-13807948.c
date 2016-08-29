#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int i,j,k=0,b[4],flag=0,ans=0;
    char a[4][103];
    for(i=0;i<4;i++)
    scanf("%s",a[i]);
    for(i=0;i<4;i++)
    b[i]= strlen(a[i])-2;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(b[i]>=2*b[j])
            k++;
        }
        if(k==3)
        {
            flag++;
            ans=i;
        }
        k=0;
    }
    k=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(b[i]*2<=b[j])
            k++;
        }
        if(k==3)
        {
            flag++;
            ans=i;
        }
        k=0;
    }
    if(flag==1)
    printf("%c",a[ans][0]);
    else
    printf("C");
    return 0;
}