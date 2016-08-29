#include <stdio.h>
#define MAXN 53
#define MAXLEN 1033
char map[MAXN][MAXLEN]={
"",
"Washington",
"Adams",
"Jefferson",
"Madison",
"Monroe",
"Adams",
"Jackson",
"Van Buren",
"Harrison",
"Tyler",
"Polk",
"Taylor",
"Fillmore",
"Pierce",
"Buchanan",
"Lincoln",
"Johnson",
"Grant",
"Hayes",
"Garfield",
"Arthur",
"Cleveland",
"Harrison",
"Cleceland",
"McKinley",
"Roosevelt",
"Taft",
"Wilson",
"Harding",
"Coolidge",
"Hoover",
"Roosevelt",
"Truman",
"Eisenhower",
"Kennedy",
"Johnson",
"Nixon",
"Ford",
"Carter",
"Reagan",
"Bush",
"Cliton"
};
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    printf("%s",map[n]);
    return 0;
}
