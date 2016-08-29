#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x,h,i,buff,cont=0;
    
    scanf("%d %d",&x,&h);
    
    for(i=0;i<x;i++)
    {
        scanf("%d",&buff);
        (buff>=h)?cont=cont+2:cont++;
    }
    printf("%d",cont);
    return 0;
}
