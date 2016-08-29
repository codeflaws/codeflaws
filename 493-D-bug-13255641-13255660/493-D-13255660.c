#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("black");
    }
    else
    {
        printf("white\n1 2");
    }
    return 0;
}
