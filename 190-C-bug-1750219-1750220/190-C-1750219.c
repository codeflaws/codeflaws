#include <stdio.h>
#include <string.h>

char s[5000000], ans[5000000];
int n, m, k, pnt;

int print_type(void)
{
    if(pnt >= n){
        return 0;
    } else {
        if(s[pnt] == 'i'){
            --k;
            pnt += 4;
            ans[m++] = 'i';
            ans[m++] = 'n';
            ans[m++] = 't';
            return 1;
        } else {
            pnt += 5;
            ans[m++] = 'p';
            ans[m++] = 'a';
            ans[m++] = 'i';
            ans[m++] = 'r';
            ans[m++] = '<';
            int p1 = print_type();
            ans[m++] = ',';
            int p2 = print_type();
            ans[m++] = '>';
            return p1 && p2;
        }
    }
}

int main(int argc, char *argv[])
{
    scanf("%d\n", &k);
    fgets(s, 5000000, stdin);
    n = strlen(s);
    if(s[n - 1] == '\n'){
        s[--n] = '\0';
    }
    if (print_type() && k == 0 && pnt >= n){
        ans[m++] = '\0';
        printf("%s", ans);
    } else {
        printf("Error occured");
    }
    return 0;
}
