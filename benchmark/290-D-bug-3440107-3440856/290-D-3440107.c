#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j;
    char str1[55],str2[55];
    scanf(" %s",str1);
    scanf(" %d",&n);
    for(i=0;str1[i] != '\0';i++)
        {
            if(str1[i] >= 65 && str1[i] <= 90)
            {str2[j] = str1[i] + 32;
            j++;}
            else if(str1[i] >= 97 && str1[i] <= 122)
            {str2[j] = str1[i];
            j++;}
        }
    str2[j] = '\0';
    for(i=0;str2[i] != '\0';i++)
    {
        if(str2[i] < (n+97))
        {
            str2[i] = str2[i] - 32;
        }
    }
    printf("%s",str2);
    return 0;
}
