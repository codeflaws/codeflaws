/* 
 * File:   main.c
 * Author: pavan
 *
 * Created on January 27, 2011, 11:49 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int pow(int n)
{
    int i;
    int arr[100];
     arr[0]=1;
     if(n==1)
         return 1;
    for(i=1;i<=10;i++)
    {
        arr[i]=arr[i-1]*2;
        if(arr[i]==n)
            return 1;
    }
     return 0;

}
int main(int argc, char *argv[])
{
    int n;
    while(1)
    {
    scanf("%d",&n);
     int x=pow(n);
    if(x)
        printf("YES\n");
    else
        printf("NO\n");
    }
    return 0;
}
