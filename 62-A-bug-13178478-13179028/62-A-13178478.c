#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[]) {
    int bl,br,gl,gr;
    scanf("%d %d %d %d",&gl,&gr,&bl,&br);
    if(abs(bl-gr)<2||abs(br-gl)<2)  printf("YES");
    else if((bl<=2*gr+2&&bl>gr)||(br<=2*gl+2==2&&br>gl))    printf("YES");
    else    printf("NO");
    return 0;
}