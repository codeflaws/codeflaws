#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int m, n, i, left = -1, right = 1001, temp;

    scanf("%d%d",&n,&m);
    getchar();
    for(i=0; i<m; i++)
    {
        int j;
        char str[50];
        gets(str);
        temp = 0;

        if(str[7] == 'l')
        {
            j = 15;
            for(; j<strlen(str); j++)
                temp = temp * 10 + str[j] - '0';
            if(temp < right)
                right = temp;
        }
        else if(str[7] == 'r')
        {
            j = 16;
            for(; j<strlen(str); j++)
                temp = temp * 10 + str[j] - '0';
            if(temp > left)
                left = temp;
        }
    }

    if(n == 1 && m == 1)
        printf("-1\n");
    else if(m == 0)
        printf("%d\n",n);
    else if(left == -1 && right > 1)
        printf("%d\n",right-1);
    else if(right == 1001 && left < 1000)
        printf("%d\n",n-left);
    else if(right - left > 1 && left < n)
        printf("%d\n",right-left-1);
    else
        printf("-1\n");
    return 0;
}
