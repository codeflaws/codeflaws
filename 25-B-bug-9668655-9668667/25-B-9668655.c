#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int len,i;
    char *array;
    scanf("%d",&len);
    array=(char *)malloc(len*sizeof(char));
    scanf("%s",array);
    if(len%2==0)
    {
        for(i=0;i<len-2;i=i+2)
        {
            printf("%c%c-",array[i],array[i+1]);
        }
        printf("%c%c",array[i+2],array[i+3]);
    }
    else
    {
        for(i=0;i<len-3;i=i+2)
        {
            printf("%c%c-",array[i],array[i+1]);
        }
        printf("%c%c%c",array[len-3],array[len-2],array[len-1]);
    }
    return 0;
}
