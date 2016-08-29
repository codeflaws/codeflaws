#include <stdio.h>
#include <stdlib.h>
void insertionsort(char *a,int n)
{
    int j=0,key=0,i=0;
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
}
int main(int argc, char *argv[])
{
    char a[11];
    char b[11];
    int i=0,j=0,flag=0;
    scanf("%s",a);
    while(a[i]!='\0')
        i++;
    int len1=i;
    //printf("\nLEN1 IS %d",len1);
    scanf("%s",b);
    i=0;
    while(b[i]!='\0')
        i++;
    int len2=i;
    //printf("\nLEN2 IS %d",len2);
    if(len1!=len2)
        flag=0;
    else
    {
    insertionsort(a,len1);
    i=0;
    while(a[i]==48)
        i++;
     int key=a[i];
    for(j=i;j>0;j--)
    {
        a[j]=a[j-1];
    }
    a[j]=key;
    //printf("\n");
    //for(i=0;i<len1;i++)
     //   printf("%c",a[i]);
    //printf("\nPANNU");
    for(i=0;i<len1;i++)
    {
        if(a[i]!=b[i])
        {
            //printf("\nI:%d",i);
            flag=0;
            break;
        }
        else
            flag=1;
    }
    }
    if(flag==0)
        printf("WRONG_ANSWER");
    else
        printf("OK");
    return 0;
}
