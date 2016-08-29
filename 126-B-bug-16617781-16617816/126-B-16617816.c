//Cr: P'March and P'Jumpwmk
#include <stdio.h>
#include <string.h>
#define PRIME 14122501
char S[2000000];
int Pi[2000000];
int KHash[2000000] = {0};
int FHash[2000000];
int BHash[2000000];
int L;
void PreCal(int X)
{
    Pi[0] = -1;
    int j = -1;
    int i = 0;
    while (i < X)
    {
        while (j >= 0 && S[i] != S[j])
            j = Pi[j];
        i++;
        j++;
        Pi[i] = j;

        if (i < X)
            KHash[j] = 1;
    }
}
int main(int argc, char *argv[])
{
    scanf("%s", &S);
    L = strlen(S);
    PreCal(L);

    int t;
    /*for (t = 0; t <= L; t++)
        printf("%d\n", Pi[t]);*/

    //case 1:
    //####         prefix
    //        #### suffix
    int i = Pi[L];
    if (i > 0 && KHash[i])
    {
        S[i] = '\0';
        printf("%s\n", S);
        return 0;
    }

    //case 2:
    //########     prefix
    //    ######## suffix
    int j = Pi[Pi[L]];
    if (j > 0 && KHash[j])
    {
        S[j] = '\0';
        printf("%s\n", S);
        return 0;
    }

    printf("Just a legend");
}
