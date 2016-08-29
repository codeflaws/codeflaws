#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    char frase1[200], frase2[200];
    int i,j,achou=0;
    gets(frase1);
    gets(frase2);

    for(i=0; frase2[i]!= '\0';i++)
    {
        if (frase2[i]!=' ')
        {
            for(j=0; (frase1[j]!='\0'&& !achou); j++)
            {
                if(frase2[i]==frase1[j])
                {
                    achou=1;
                    frase1[j]=' ';
                }
            }
            if (!achou)
            {
                printf("NO");
                exit(1);
            }
        }
    }
    printf("YES");
  return 0;
}