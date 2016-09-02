#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
   char arr[200000];
   int arr1[6],i,cnt=0;
   for(i=1;i<=4;i++)
   {
       scanf("%d",&arr1[i]);
   }
   scanf("%s",arr);
   for(i=0;i<strlen(arr);i++)
   {
       cnt=cnt+arr1[(int)(arr[(i-1)%3+1]-48)];
//printf("%d\n",cnt);
   }
   printf("%d\n",cnt);
   return 0;
}
