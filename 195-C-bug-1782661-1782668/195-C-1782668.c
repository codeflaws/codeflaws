#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n, m, p = 0, f = 0, x = 0, i, j;
    char s[100], c1[21], c2[21];
    
    scanf("%d%*c", &n);
    
    for (i = 0; i < n; i++) {
        fgets(s, 100, stdin);
        
        m = strlen(s) - 1;
        
        for (j = 0; j < m; j++) {
            if (s[j] == 't') {
                if (s[j + 1] == 'r') {
                    if (f == 1) x++;
                    
                    j += 3;
                } else {
                    f = 1;
                    
                    j += 5;
                    
                    while (!(s[j] >= 'A' && s[j] <= 'Z') && !(s[j] >= 'a' && s[j] <= 'z')) j++;
                    
                    while ((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z')) {
                        c1[p++] = s[j++];
                    }
                    
                    c1[p] = '\0';
                }
            } else if (s[j] == 'c') {
                int q = 0;
                
                j += 5;
                
                while (!(s[j] >= 'A' && s[j] <= 'Z') && !(s[j] >= 'a' && s[j] <= 'z')) j++;
                
                while ((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z')) {
                    c2[q++] = s[j++];
                }
                
                c2[q] = '\0';
                
                if (f == 1 && x == 0 && strcmp(c1, c2) == 0) {
                    while (s[j] != '"') j++;
                    
                    j++;
                    
                    while (s[j] != '"') {
                        printf("%c", s[j++]);
                    }
                    
                    puts("");
                    
                    return 0;
                } else {
                    while (s[j] != ')') j++;
                }
                
                if (f == 1) x--;
                
                if (x < 0) x = 0;
            }
        }
    }
    
    puts("Unhandled Exception");
    
    return 0;
}
