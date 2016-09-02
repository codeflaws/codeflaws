#include <stdio.h>
//#include <Windows.h>
int main(int argc, char *argv[]) {

    int mas[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;

    scanf("%d", &n);

    for (int i=0; i < 14; i++)
        if(n % mas[i] == 0)
        {
            printf("YES");
            return 0;
        }


    printf("NO");
    //system("pause");
    return 0;
}