#include <stdio.h>
#include <stdlib.h>
# include <string.h>
int main(int argc, char *argv[])
{
    char str[1005];
    scanf("%s",str);
    int k;
    scanf("%d",&k);
    int i;
    long long int ans = 0;
    int values[26];
    for(i=0;i<26;i++) scanf("%d",&values[i]);
    for(i=0;i<strlen(str);i++) ans += ((i+1) * values[str[i] - 'a']);
    int max_val = -1;
    for(i=0;i<26;i++) if (values[i] > max_val) max_val = values[i];
    int offst = strlen(str) + 1;
    for(i=0;i<k;i++) ans += ((i+offst)*max_val);
    printf("%lld\n",ans);
    return 0;
}
