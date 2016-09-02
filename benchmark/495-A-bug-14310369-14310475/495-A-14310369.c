#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,i,j,k,decimal,single,sum;

    int adding_stck[10] ={2,7,3,3,3,4,3,5,1,2};

    scanf("%d",&n);

    decimal = n /10;

    single = n%10;

    sum = adding_stck[decimal] * adding_stck[single];

    printf("%d\n",sum);






    return 0;


}
