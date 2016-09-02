#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, i, number[105], even=0, noneven=0, j;
    scanf("%d", &a);
    for (i=0; i!=a; i++)
    {
        scanf("%d", &number[i]);
    }
    if (number[0]%2==0)
    {
        even++;
    }
    else
    {
        noneven++;
    }
        if (number[1]%2==0)
    {
        even++;
    }
    else
    {
        noneven;
    }
        if (number[2]%2==0)
    {
        even++;
    }
    else
    {
        noneven++;
    }
    if (even>=2)
    {
        for(j=0; j!=a+0; j++)
        {
            if (number[j]%2==1)
            {
                j++;
                printf("%d", j);
                break;
            }
        }
    }
        if (noneven>=2)
    {
        for(j=0; j!=a; j++)
        {
            if (number[j]%2==0)
            {
                j++;
                printf("%d", j);
                break;
            }
        }
    }
    return 0;
}
