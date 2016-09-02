#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    //hello
    char arr[105];
    scanf("%s", arr);
    int i, l=strlen(arr);
    for(i=0; i<l; i++)
    {
        if(arr[i]>=65 && arr[i]<=90)
            arr[i]=arr[i]+32;
    }
    for(i=0; i<l; i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
            continue;
        else
            printf(".%c", arr[i]);
    }
    return 0;
}