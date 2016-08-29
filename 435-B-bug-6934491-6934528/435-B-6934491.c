#include <stdio.h>

int main(int argc, char *argv[])
{
    char Str[20];
    int K, i, j, maxid;
    char max;
    scanf("%s %d", Str, &K);
    for(i=0; i<K && Str[i]!='\0'; ++i)
    {
        max = Str[i];
        maxid = i;
        for(j=i+1; j<i+1+K && Str[j]!='\0'; ++j)
        {
            if(Str[j] > max)
            {
                max = Str[j];
                maxid = j;
            }
        }
        if(maxid != i)
        {
            K -= maxid - i;
            for(j=maxid; j>i; --j)
            {
                Str[j] = Str[j-1];
            }
            Str[i] = max;
        }
    }
    puts(Str);
    return 0;
}
