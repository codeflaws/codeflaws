#include <stdio.h>

int main(int argc, char *argv[]){
    int n, k, i, par;
    char d[100001];
    
    scanf("%d %d %s", &n, &k, d);
    
    for(i = 0; i <= n; i++){
        par = i % 2;
        if(d[i] == '4' && d[i + 1] == '7'){
            if(par && i != 0 && d[i - 1] == '4'){
                if(k % 2) d[i] = '7';
                break;
            } else {
                if(!par) d[i + 1] = '4';
                else {
                    d[i] = '7';
                    i++;
                }
                k--;
            }
        }
    }
    
    printf("%s\n", d);
    
    return 0;
}
