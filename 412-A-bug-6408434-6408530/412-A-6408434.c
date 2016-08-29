#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int n, k;
    scanf("%d%d", &n, &k);
    char s[1000];
    scanf("%s", s);
    int l = strlen(s);
    int i, j;
    if(k == 1) {
        for(i =0; i< l; i++) {
            printf("PRINT %c\n", s[i]);
            if(i != l-1)
            printf("RIGHT\n");
        }
    } else if(k == l) {
        for(i =l-1; i >= 0; i--) {
            printf("PRINT %c\n", s[i]);
            if(i != 0)
            printf("LEFT\n");
        }
    } else {
        int p, q;
        
        p = n - k;
        q = n - 1;
        if(p <= q) {
            
            for(i = 0; i < p; i++) {
                printf("RIGHT\n");
            }
            for(i =l-1; i >= 0; i--) {
            printf("PRINT %c\n", s[i]);
            if(i != 0)
            printf("LEFT\n");
        }
            
        } else {
            
            for(i = 0; i < q; i++) {
                printf("LEFT\n");
            }
            for(i =0; i< l; i++) {
            printf("PRINT %c\n", s[i]);
            if(i != l-1)
            printf("RIGHT\n");
        }
        }
    }
    return 0;
}