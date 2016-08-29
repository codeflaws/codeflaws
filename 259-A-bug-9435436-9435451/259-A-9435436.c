#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char a[8];
    int i,j;
    for(i=0;i<8;i++)
    {
        scanf("%s",a);
        if(strcmp(a,"WBWBWBWB")==1 && strcmp(a,"BWBWBWBW")==1)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
    
}