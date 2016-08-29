#include<stdio.h>

int main(int argc, char *argv[])
{
    int i, cunte=0, cunto=0, n, p;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &p);
        if(p==100) cunto++;
        else cunte++;
    }
    if(cunto%2==1 && cunte%2==1) printf("NO");
    else printf("YES");
    return 0;
}
