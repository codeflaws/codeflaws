#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int m, n;
    scanf("%d %d",&n , &m);
    int i,j;
    int array[m];
    int b[m];
    for(i=0;i<n;i++)
    {
     b[i]=0;
     }
    for(i=0;i<m;i++)
    {
       scanf("%d",&array[i]);
       //printf("%d\n",array[i]);
    }
    for(i=0;i<m;i++)
    {
       j=array[i]-1;
       //printf("%d\n",j);
       while(j < n && b[j] ==0 )
       {
           b[j] = array[i];
           //printf("b[j]: %d\n",b[j]);
           j = j+1;
       }
    }
    for(i=0;i<n;i++)
     {
     printf("%d ",b[i]);
    }
    //getch();
    return 0;
}
