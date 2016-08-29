#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int a,b,s;
    scanf("%d %d %d", &a, &b,&s);

    if(a+b==s)
        printf("Yes\n");
    else if(a+b>s)
        printf("No\n");
    else if(a+b<s)
    {
        s=s-a-b;
        if(s%2==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
