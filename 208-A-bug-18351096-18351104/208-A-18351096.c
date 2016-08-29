#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char arry[210], ans[210];
    int len, i, j;

    gets(arry);

    len = strlen(arry);

    for(i=3, j=0; i<len;) {
        if(arry[i]=='W' && arry[i+1]=='U' && arry[i+2]=='B') {
            i+=3;
            if(j!=0 && ans[j-1]!=' ') ans[j++] = ' ';
        }
        else {
            ans[j] = arry[i];
            j++;
            i++;
        }
    }
    ans[j] = '\0';
    printf(ans);

    return 0;
}
