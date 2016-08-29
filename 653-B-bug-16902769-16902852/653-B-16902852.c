#include <stdio.h>
#include <string.h>

#define MAX_Q 36
char tStr[MAX_Q][5], a[MAX_Q], b[MAX_Q];
int n,q,cnt;

int find(char h, int len, int *cnt)
{
    int i;
    for(i=0;i<q;i++){
        if(b[i] == h){
            if(len == n-1){
                *cnt = *cnt+1;
            }else{
                *cnt = find(a[i], len+1, cnt);
            }
        }
    }
    return *cnt;
}

int main(int argc, char *argv[])
{
    int i;
    scanf("%d %d\n", &n, &q);
    for(i=0;i<q;i++){
        gets(tStr[i]);
        a[i]=tStr[i][0];
        b[i]=tStr[i][3];
    }
    printf("%d", find('a', 1, &cnt));
}