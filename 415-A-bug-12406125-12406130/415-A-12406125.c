// C program for insertion sort
#include <stdio.h>
#include <math.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
 {
     int i=0,j=0,m,c1=0,a,b,s1=0,s2=0,c2=0,c=0,arr[100005],n;
     scanf("%d %d",&n,&m);
     for(i=0;i<m;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("1");
     for(i=2;i<=n;i++)
     {
         for(j=0;j<m;j++)
         {
             if(arr[j]<=i)
                break;
         }
         printf("%d ",arr[j]);
     }
             return 0;
 }
