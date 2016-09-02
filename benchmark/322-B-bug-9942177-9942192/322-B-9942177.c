#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(int argc, char *argv[]) {
    
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    
    int ans1, ans2, ans3;
    ans1 = r/3 + g/3 + b/3;
    if (r >= 1 && g >= 1 && b >= 1)
        ans2 = (r-1)/3 + (g-1)/3 + (b-1)/3 + 1;
    if(r >= 2 && g >= 2 && b >= 2)
        ans3 = (r-2) / 3 + (g-2) / 3 + (b-2) / 3 + 2;
            
    printf("%d", max(max(ans1, ans2), ans3));       
    
    return 0;
}
