#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[]) {
    int bl,br,gl,gr;
    scanf("%d %d %d %d",&gl,&gr,&bl,&br);
    if(abs(bl-gr)<2||abs(br-gl)<2)  printf("YES");
    else if(bl-gr==2||br-gl==2) printf("YES");
    else    printf("NO");
    return 0;
}