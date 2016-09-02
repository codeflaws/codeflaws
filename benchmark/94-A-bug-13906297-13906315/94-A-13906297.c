#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separar(char a[][11], char b[]);
int comparar(char a[][11], char b[]);

int main(int argc, char *argv[])
{
    char cadena[81];
    char m_val[10][11];
    char m_aux[8][11];
    char decod[9] = "";
    int i;

    scanf("%s", cadena);
    for( i = 0; i < 10; i++)
    {
        scanf("%s", m_val[i]);
    }
    separar(m_aux, cadena);

    for(i = 0; i <8; i++)
    {
        decod[i] = comparar( m_val, m_aux[i]);
    }
    decod[8] = '\0';
    printf("%s", decod);

return 0;
}

void separar(char a[][11], char b[])
{
    int i, j, k = 0;
    for(i=0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            a[i][j] = b[k];
            k++;
        }
        a[i][10] = '\0';
    }
}

int comparar(char a[][11], char b[])
{
    char val;
        if( (strcmp(a[0], b)) == 0 )
            val = '0';
        if( (strcmp(a[1], b)) == 0 )
            val = '1';
        if( (strcmp(a[2], b)) == 0 )
            val = '2';
        if( (strcmp(a[3], b)) == 0 )
            val = '3';
        if( (strcmp(a[4], b)) == 0 )
            val = '4';
        if( (strcmp(a[5], b)) == 0 )
            val = '5';
        if( (strcmp(a[6], b)) == 0 )
            val = '6';
        if( (strcmp(a[7], b)) == 0 )
            val = '7';
        if( (strcmp(a[8], b)) == 0 )
            val = '8';
        if( (strcmp(a[9], b)) == 0 )
            val = '9';
    return val;
}
