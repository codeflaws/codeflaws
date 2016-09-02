#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char array[10001];
    gets(array);
    int j;
    int i=strlen(array);
    for(j=2;j<i;j++)
    {
        if(array[i-j]!=32)
        {
            if(array[i-j]=='A' || array[i-j]=='E' || array[i-j]=='I' || array[i-j]=='O' || array[i-j]=='U' || array[i-j]=='a' || array[i-j]=='e' || array[i-j]=='i' || array[i-j]=='o' || array[i-j]=='u' || array[i-j]=='Y' || array[i-j]=='y')
            {
                printf("YES");
                return 0;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
    }

    return 0;
}
