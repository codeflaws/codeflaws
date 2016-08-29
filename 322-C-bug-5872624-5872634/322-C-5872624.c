#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define For(i,n) for(i=0;i<n;i++)
#define MAX(x,y) x>y?x:y
#define MAXN 111

int mov[MAXN][2];

int main(int argc, char *argv[])
{
    int i, j, flag = 1;
    int k, a, b;
    int x, y, sx = 0, sy = 0;
    char s[111];
    scanf("%d%d%s",&x,&y,s);
    mov[0][0] = mov[0][1] = 0;
    for(i = 0; s[i]; i++)
    {
        mov[i+1][0] = (s[i]=='U'||s[i]=='D')?0:s[i]=='R'?1:-1;
        mov[i+1][1] = (s[i]=='R'||s[i]=='L')?0:s[i]=='U'?1:-1;
        sx += mov[i+1][0];
        sy += mov[i+1][1];
    }
    For(i,strlen(s)){
        x -= mov[i][0];
        y -= mov[i][1];
        if(sx==0&&sy==0) k = 1;
        else if(sx!=0)  k = x/sx;
        else k = y/sy;
        if(sx*k==x&&sy*k==y&&k>0)
        {
            printf("Yes\n");
            flag = 0; break;
        }
    }
    if(flag) printf("No\n");
    return 0;
}
