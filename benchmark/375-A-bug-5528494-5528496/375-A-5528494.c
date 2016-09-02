#include <stdio.h>
int array[25];
int indx = 0;

void perm(int* source,int num,int len)
{
    if(len == 1)
        array[indx++] = num*10 + source[0];

    int i,j;
    for(i = 0;i < len; i++)
    {
        int temp[4],count = 0;
        for(j = 0; j < len; j++)
        {
            if(j != i)
                temp[count++] = source[j];
        }
       perm(temp,num*10 + source[i],count);
    }
}

int main(int argc, char *argv[])
{
    int num[] = {1,6,8,9};
    int numCheck[5] = {0};
    int i,j,n;
    int divPerm[8],count = 0;;
    perm(num,0,4);
    for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 24; j++)
        {
            n = i*10000 + array[j];
            if(n%7 == 0)
            {
                divPerm[i] = array[j];
                break;
            }
        }
    }

    //char str[1000001];
    int c = 0, val = 0,zero = 0;;
    while(c >=0 && c <= 9)
    {
        c = getchar() - '0';
        if(c < 0 || c > 9)  break;
        if(c == 0)
        {
             zero++;
        }
        else if(c == 1 || c == 6 || c == 9 || c == 8)
        {
            numCheck[(c-1)/2] = 1;
        }
        else
        {
            printf("%d",c);
            val = val*10 + c;
            val %= 7;
        }

    }
    printf("%d",divPerm[val]);
    while(zero--)
        printf("0");
    printf("\n");

    return 0;
}
