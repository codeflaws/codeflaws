#include<stdio.h>
#include<string.h>
void swap(int a[],int b[])
{
    int t;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    t=a[1];
    a[1]=b[1];
    b[1]=t;
}
int main(int argc, char *argv[])
{
    int a[2][2],b[2][2];
    scanf("%d%d",&a[0][0],&a[0][1]);
    scanf("%d%d",&a[1][0],&a[1][1]);
    scanf("%d%d",&b[0][0],&b[0][1]);
    scanf("%d%d",&b[1][0],&b[1][1]);

   if(((a[0][0]>b[1][1]&&a[1][1]>b[0][0])&&(a[0][0]>b[0][1]&&a[1][1]>b[1][0]))||(((a[1][0]>b[0][1]&&a[0][1]>b[1][0]))&&(a[1][0]>b[1][1]&&a[0][1]>b[0][0])))
   {
       printf("Team 1\n");
   }
   else if(((a[0][0]<b[1][1]&&a[1][1]<b[0][0])||(a[0][0]<b[0][1]&&a[1][1]<b[1][0]))&&(((a[1][0]<b[0][1]&&a[0][1]<b[1][0]))||(a[1][0]<b[1][1]&&a[0][1]<b[0][0])))
   {
       printf("Team 2\n");
   }
   else
   printf("Draw\n");
    return 0;
}
