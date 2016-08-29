#include <stdio.h>

int main(int argc, char *argv[])
{
    char previous = 10;
    char current;
    int n, k;

    char ultimo_passou = 10;
    char ultimo_deve_passar;

    scanf("%d %d", &n, &k);

    if(k > n || k == 1){
        printf("-1\n");
        return 0;
    }

    ultimo_deve_passar = 'a' + (k-1);

    //printf(">%c<", ultimo_deve_passar);

    int i;
    for(i = 0; i < n; i++)
    {
        //printf(">%c\n", ultimo_passou + (n-i));
        if(ultimo_passou + (n-i) == ultimo_deve_passar)
        {
            //printf("k\n");
            current = ultimo_passou+1;
            
        }
        else if(previous != 'a')
            current = 'a';
        else
            current = 'b';
        
        if(current > ultimo_passou)
            ultimo_passou = current;
//        printf("|%c|", ultimo_passou);
        
        printf("%c", current);
        previous = current; 
    }
    printf("\n");

    return 0;
}