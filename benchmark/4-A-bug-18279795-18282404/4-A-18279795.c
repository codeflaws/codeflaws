#include<stdio.h>
//#include<conio.h>

int main(int argc, char *argv[])
{
    int n;

    scanf("%d",&n);

    if(n<2)
    {
        printf("NO");
    }
    else
    {
        if(n<=100)
        {
        if(n%2==0)
        printf("YES");

        else
        printf("NO");
        }
        
        else
        printf("NO");
    }

return 0;

}
