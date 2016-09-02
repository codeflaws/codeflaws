#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,a[4];
    scanf("%d",&a[0]);
    int c=1;
    scanf("%d",&a[1]);
    if(a[1]!=a[0]) c++;
    scanf("%d",&a[2]);
    if(a[2]!=a[0] && a[2]!=a[1]) c++;
    scanf("%d",&a[3]);
    if(a[3]!=a[2] && a[3]!=a[2] && a[3]!=a[0]) c++;

   // printf("%d\n\n",c);

    //total c shoes different;
    printf("%d\n",4-c); //have to buy 4-c shoes;


    //another way to solve, try set.
    return 0;
}
