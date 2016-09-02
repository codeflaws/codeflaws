#include <stdio.h>
#include <string.h>
#define total 81
#define n 11
int main(int argc, char *argv[])
{
    int i,j,bandera,c=0;;
    char *codigo=(char*)calloc(total,sizeof(char));
    char *numero=(char*)calloc(n-2,sizeof(char));
    char digito[n]={"0123456789"};
    printf("%s\n",digito);
    char matriz[n-3][n]={};
    char valor[n-1][n]={};
    scanf("%s",codigo);
    for(i=0 ; i<n-3 ; i++)
    {
         for(j=0 ; j<n-1 ; j++)
         {
            matriz[i][j]=codigo[c];
            c++;
         }
    }
    c=0;
    do
    {
        for(i=0 ; i<n-1 ; i++)
        {
            scanf("%s",valor[i]);
        }
        for(i=0 ; i<n-3 ; i++)
        {
            for(j=0 ; j<n-1 ; j++)
            {
               bandera=strcmp(matriz[i],valor[j]);
               if(bandera==0)
               {
                     numero[c]=digito[j];
                     c++;
                     break;
               }
           }
        }
    }while(c<n-3);
    printf("%s",numero);
    return 0;
}