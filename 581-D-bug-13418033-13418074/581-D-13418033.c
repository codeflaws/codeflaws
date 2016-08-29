#include <stdio.h>

typedef struct p {
    int x;
    int y;
    char c;
} pic;

int max(int a, int b) {
    return a>b?a:b;
}
int other_length(pic p, int a) {
    if(p.x == a) return p.y;
    return p.x;
}
int is_length(pic p, int a) {
    if(p.x == a || p.y == a) return 1;
    return 0;
}
int main(int argc, char *argv[]) {
    int i,tmp,j,h,length=-1,k;
    pic p[3];
    for(i=0; i<3; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
        tmp = max(p[i].x, p[i].y);
        if(tmp > length) {
            length = tmp;
            j=i;
        }
        p[i].c = 'A'+i;
    }
    if(length*length != (p[0].x*p[0].y+p[1].x*p[1].y+p[2].x*p[2].y)){
        printf("%d", -1);
        return 0;
    }
    printf("%d\n", length);
    tmp = other_length(p[j], length);
    for(h=0; h<tmp; h++) {
        for(k=0; k<length; k++) {
            printf("%c", p[j].c);
        }
        printf("\n");
    }


    if(is_length(p[(j+1)%3], tmp)) {

        for(h=0; h<(length-tmp); h++) {
            for(k=0; k<other_length(p[(j+1)%3], length-tmp); k++) {
                printf("%c", p[(j+1)%3].c);
            }
            for(k=0; k<other_length(p[(j+2)%3], length-tmp); k++) {
                printf("%c", p[(j+2)%3].c);
            }
            printf("\n");
        }
    } else {
        for(h=0; h<other_length(p[(j+1)%3], length); h++) {
            for(k=0; k<length; k++) {
                printf("%c", p[(j+1)%3].c);
            }
            printf("\n");
        }
        for(h=0; h<other_length(p[(j+2)%3], length); h++) {
            for(k=0; k<length; k++) {
                printf("%c", p[(j+2)%3].c);
            }
            printf("\n");
        }
    }


    return 0;
}
/*
Inp:
5 1 2 5 5 2
Out:
5
AAAAA
BBBBB
BBBBB
CCCCC
CCCCC
*/
