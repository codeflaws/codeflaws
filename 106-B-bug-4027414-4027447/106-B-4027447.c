#include<stdio.h>
int main(int argc, char *argv[])
{
    int t,i,j,m,a[150][150],counter1,counter2,mini=9999,minii;
    scanf("%d",&t);
    //scannig of test cases
    for(i=0;i<t;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // comparing and printing
    for(i=0;i<t-1;i++)
    {
        for(m=(i+1);m<t;m++)
        {
            counter1=0;
            counter2=0;
            for(j=0;j<3;j++)
            {
                if(a[i][j] > a[m][j])
                    counter1++;
                else if (a[i][j] < a[m][j]){
                    counter2++;
                }
            }
            if(counter1 == 3)
                a[m][3]=999999999;
            if(counter2 == 3)
                a[i][3]=999999999;
        }
    }
    for(i=0;i<t;i++)
    {
        if(a[i][3] < mini)
        {
            mini = a[i][3];
            minii = i+1;
        }
    }
    printf("%d",minii);
return 0;
}
