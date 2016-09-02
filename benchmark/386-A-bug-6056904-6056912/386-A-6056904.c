#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,array[10000],i,c,d,swap,max,maxloc;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

        max=array[0];
        maxloc=1;
    for(i=1;i<n;i++)
    {
        if(array[i]>max)
           {
                max=array[i];
                maxloc=i+1;
           }

    }


   for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }


  printf("%d %d",maxloc,array[n-2]);


}
