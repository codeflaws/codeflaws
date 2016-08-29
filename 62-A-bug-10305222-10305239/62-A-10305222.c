#include<stdio.h>

int main(int argc, char *argv[])
{
    int b_r, b_l, g_r, g_l, k, l;

    scanf("%d %d %d %d", &g_r, &g_l, &b_r, &b_l);

    if(b_r%2==1)
        k=b_r+1;
    if(b_l%2==1)
        l=b_l+1;

    if((b_r >= g_l-1) && (g_l >= (k / 2)-1))
        printf("YES\n");

    else if((b_l >= g_r-1) && (g_r >= (l / 2)-1))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
