#include<stdio.h>
int main(int argc, char *argv[]){
    unsigned int w;
    scanf("%ud",&w);
    if(w==2){printf("NO");
    return 0;
}
else if(w%2==0)printf("YES");
    else printf("NO");
}