#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,m;
    scanf("%d %d",&n,&m);
    int array[m];
    int i;
    for(i=0;i<m;i++)
        scanf("%d",&array[i]);
    int j;
    for(i=0;i<m;i++)
        for(j=0;j<m-i;j++)
            if(array[j]>array[j+1])
            {
                array[j]^=array[j+1];
                array[j+1]^=array[j];
                array[j]^=array[j+1];
            }
    int minimum=array[n-1]-array[0];
    for(i=1,j=i+(n-1);i<m-n;i++)
        if((array[j]-array[i])<minimum)
            minimum=array[j]-array[i];
    printf("%d",minimum);
    return 0;
}
