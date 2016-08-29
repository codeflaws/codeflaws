#include <stdio.h>
int main(int argc, char *argv[]) {
    char a[8][10]= {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    char b[9];
    int n, i, j, l,s1=0,s2=0;
    scanf("%d",&n);
    scanf("%s",&b);
    if(n==8) {
        printf("%s",a[0]);
        }
    else {
        for(i=1; i<=7; i++) {
            s1=0;
            s2=0;
            for(j=0; j<4; j++) {
                if(b[j] >= 'a' && b[j] <= 'z') {
                    s1=s1+a[i][j];
                    s2=s2+b[j];
                    }
                }
            if(s1==s2) {
                printf("%s",a[i]);
                break;
                }
            }
        }
    return 0;
    }
