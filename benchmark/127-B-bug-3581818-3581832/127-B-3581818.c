#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,no;
    int have=0;
    scanf("%d",&n);
    int array1[101]={0};
    int i,y;
    for(i=0;i<n;i++)
    {
        scanf("%d",&no);
        array1[no]++;
    }
    for(i=0;i<100;i++)
    {

if(array1[i]!=0)
{
    if(array1[i]%2==0)
    {
        have+=array1[i]/2;
    }
    else if(array1[i]%2!=0)
    {
        array1[i]--;
        if(array1[i]!=0)
        {
            have+=array1[i]/2;
        }
    }
}
    }
    printf("%d",have/2);


    return 0;
}
