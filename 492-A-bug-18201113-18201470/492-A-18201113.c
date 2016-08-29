#include<stdio.h>
int main(int argc, char *argv[])
{
    int n , i = 1 , sum = 0 , c = 0 ;

    scanf("%d",&n);

    while(sum < n)
    {
        sum += i ;
        n -= sum ;
        c++ ;
        i++;
    }
    printf("%d",c);
    return 0 ;
}
