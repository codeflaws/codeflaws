#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[100][2],i,x,n,min,max;
    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d %d",&a[0][0],&a[0][1]);
    if(a[0][0]>a[0][1])
    {
            a[0][0] = a[0][0] + a[0][1];
            a[0][1] = a[0][0] - a[0][1];
            a[0][0] = a[0][0] - a[0][1];
     }
     min =a[0][0];
     max = a[0][1];
    for(i=1; i<n; i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
        if(a[i][0]>a[i][1])
        {
        int temp;
        temp =a[i][0];
        a[i][0] = a[i][1];
        a[i][1] = temp;
         }
        if (min<a[i][0]) min = a[i][0];
        if (max>a[i][1]) max = a[i][1];
    }
   if(min>max)printf("-1");
   else if(min<=max)
   {
   if(x<=min)printf("%d",min-x);
   else if(x>=max)printf("%d",max-x);
   else printf("0");
   }
return 0;
}
    