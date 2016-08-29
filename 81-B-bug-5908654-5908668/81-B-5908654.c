#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0 , j = 0;
    char A[300] , B[300];
    gets(A);
    if(A[i] == '.')
    {
        for(j = 0;j < 3;j++)
        {
            B[j] = '.';
        }
        i += 3;
    }
    while(A[i] != '\0')
    {
        if(A[i] == ',' && A[i + 1] != '\0')
        {
            B[j] = ',';j++;
            B[j] = ' ';j++;
            i++;
        }
        else if(A[i] == ',' && A[i + 1] == '\0')
        {
            B[j] = ',';
            j++;
            i++;
        }
        else if(A[i] == '.' && B[j-1] != ' ')
        {
            B[j] = ' ';
            B[j+1] = '.';
            B[j+2] = '.';
            B[j+3] = '.';
            j+=4;
            i += 3;
        }
        else if(A[i] == '.' && B[j-1] == ' ')
        {
            B[j] = '.';
            B[j+1] = '.';
            B[j+2] = '.';
            j+=3;
            i += 3;
        }
        else if(A[i] == ' ' && (A[i + 1] >= '0' && A[i + 1] <= '9') && (B[j-1] >= '0' && B[j-1] <= '9'))
        {
            B[j] = ' ';j++;i++;
        }
        else if(A[i] >= '0' && A[i] <= '9')
        {
            B[j] = A[i];
            j++;i++;
        }
        else
        {
            i++;
        }
    }
    B[j] = '\0';
    printf("%s",B);
    return 0;
}
