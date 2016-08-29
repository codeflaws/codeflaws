#include<stdio.h>
int main(int argc, char *argv[])

{
    int n,x0,temp1,temp2;
    scanf("%d%d",&n,&x0);
    int a[n],b[n];
    int i,j;
    for(i=0; i<n; i++)

    {
        scanf("%d %d",&a[i],&b[i]);
        if(b[i]<a[i])
        {
            j=b[i];
            b[i]=a[i];
            a[i]=j;

        }
    }
    temp1=a[0];
    temp2=b[0];
    for(i=1;i<n;i++)

    {
        if(a[i]>temp1)temp1=a[i];
        else temp1=temp1;
        if(b[i]<temp2)temp2=b[i];
        else temp2=temp2;
        if(temp1>temp2)
        {
            printf("%d",-1);
            return 0;
        }
    }
    if(temp1>x0)printf("%d",temp1-x0);
    else printf("%d",x0-temp2);


    //printf("%d",count);
    return 0;
}
