#include <stdio.h>
#define MAX 101
int main(int argc, char *argv[])
{
    int i,m,x,y,suma = 0,bandera = 0,nota,total= 0;
    int c[MAX];
    scanf("%d",&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d",&c[i]);
        total += c[i];
    }
    scanf("%d %d",&x,&y);

    for(i = 0; i < m; i++)
    {
        suma += c[i];
        if(suma >= x && suma <=y)
        {
            bandera = 1;
            nota = i+2;
            break;
        }
    }
    if(bandera)
        printf("%d",nota);
    else
        printf("0");
    return 0;
}
