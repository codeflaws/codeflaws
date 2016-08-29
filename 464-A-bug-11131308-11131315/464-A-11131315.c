#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int n, p;
    char s[1005];
    scanf("%d%d", &n, &p);
    scanf("%s", s);
    i = n-1;
    while ( i >= 0 )
    {
        s[i]++;
        while ( (i-1>=0 && s[i-1]==s[i]) || (i-2>=0 && s[i-2]==s[i]) )
            s[i]++;
        if ( s[i]-'a' >= p )
            i--;
        else
            break;
    }
    if ( i < 0 || (p<3 && n-i>p) )
        printf("NO\n");
    else
    {
        for ( i = i+1; i < n; i++ )
        {
            s[i] = 'a';
            while ( (i-1>=0 && s[i-1]==s[i]) || (i-2>=0 && s[i-2]==s[i]) )
                s[i]++;
        }
        printf("%s\n", s);
    }
    return 0;
}
