#include<stdio.h>
#include<string.h>

char s[1001];
int c[27];

int main(int argc, char *argv[])
{
    int i, count = 0;
    scanf("%s", s);

    for(i = 0; i < strlen(s); i++) c[s[i]-97]++;

    for(i = 0; i < 26; i++) if(c[i] % 2 == 1) count++;

    if(count <= 1) printf("First\n");
    else printf("Second\n");

    return 0;
}
