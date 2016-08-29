#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char k[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char a[100], b;
    int l,c=1,i,j;
    scanf("%c", &b);
    if(b == 'R') c=-1;
    scanf("%s", a);
    l = strlen(a);
    for(i=0;i<l;i++)
    {
        for(j=0;j<30;j++)
        {
            if(a[i] == k[j])
            {
                printf("%c", k[j+c]);
                break;
            }
        }
    }

    return 0;
}
