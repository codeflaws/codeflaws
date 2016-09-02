/* ****
* @Codeforces Problem 407A
* @author:ckmoonfish
* @Date: 2014.4.4
* @tag:brute force, implementation, math
*******/

#include <stdio.h>


int main(int argc, char *argv[]){
    int a, b;
    scanf("%d%d", &a, &b);
    int ia, ja, ib, jb;
    int i, j;
    int flag = 0;
    i = 1; j = 2;

    for(ia = 1; ia < a; ++ia)
        for(ja = 1; ja < a; ++ja){
            if(ia*ia + ja*ja == a*a){
                for(ib = 1; ib < b; ++ib)
                    for(jb = 1; jb < b; ++jb)
                        if(ib*ib + jb*jb == b*b){
                            if(ia != ib){
                                if((ja+jb)*(ja+jb) + (ia-ib)*(ia-ib) == a*a + b*b){
                                    flag = 1;
                                    goto pt1;
                                }
                            }
                            else if(ia != jb)
                                if((ib+ja)*(ib+ja) + (ia-jb)*(ia-jb) == a*a + b*b){
                                    flag = 2;
                                    goto pt2;
                                }
                        }
            }
        }
    pt1: if(flag == 1){
        printf("YES\n");
        printf("%d %d\n", i, j);
        printf("%d %d\n", i + jb, j + ib);
        printf("%d %d\n", i - ja, j + ia);
    }

    pt2: if(flag == 2){
        printf("YES\n");
        printf("%d %d\n", i, j);
        printf("%d %d\n", i + ib, j + jb);
        printf("%d %d\n", i - ja, j + ia);
    }

    if(flag = 0)
        printf("NO\n");
    return 0;
}
