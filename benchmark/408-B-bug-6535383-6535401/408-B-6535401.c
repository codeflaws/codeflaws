#include <stdio.h>
#include <string.h>

int A[26];
int B[26];

int main(int argc, char *argv[])
{
    int i, Ans=0;
    char Str[1001];
    scanf("%s", Str);
    for(i=0; Str[i]!='\0'; ++i)
    {
        ++A[Str[i]-'a'];
    }
    scanf("%s", Str);
    for(i=0; Str[i]!='\0'; ++i)
    {
        ++B[Str[i]-'a'];
    }
    for(i=0; i<26; ++i)
    {
        if(B[i]>0 && A[i]==0)
        {
            Ans = -1;
            break;
        }
        Ans += A[i]<B[i]?A[i]:B[i];
    }
    printf("%d\n", Ans);
    return 0;
}
