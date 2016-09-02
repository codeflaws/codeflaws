/**Bismillahir Rahmanir Rahim.**/

#include <stdio.h>
int ara[26];
int main(int argc, char *argv[])
{
    int k, cndtn=0, cnt=0, i;
    char str[200];
    scanf("%d", &k);
    scanf("%s", str);
    for(i=0, cnt=0; str[i]; i++)
    {
        if(ara[str[i]-97]==0)
        {
            cnt++;
            ara[str[i]] = 1;
        }
    }
    if(cnt<k)
    {
        printf("NO\n");
        return 0;
    }
    for(i=0; i<26; i++) ara[i]=0;
    printf("YES");
    for(i=0, cnt=0, cndtn=0; str[i]; i++)
    {
        if(cnt==k)
            cndtn=1;
        if(cndtn==0)
        {
            if(ara[str[i]-97]==1)
                printf("%c", str[i]);
            else
            {
                printf("\n%c", str[i]);
                ara[str[i]-97] = 1;
                cnt++;
            }
        }
        else
            printf("%c", str[i]);
    }
    return 0;
}
