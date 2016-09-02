#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char a[8];
    int i,j;
    for(i=0;i<8;i++)
    {
        scanf("%s",a);
        if(strcmp(a,"WBWBWBWB") && strcmp(a,"BWBWBWBW"))
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
    
}