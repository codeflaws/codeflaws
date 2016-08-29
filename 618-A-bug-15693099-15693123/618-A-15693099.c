#include<stdio.h>

int main(int argc, char *argv[])
{
  int m=0,n,i=-1,k,flag=0,t=0;
  scanf("%d",&n);
  int arr[n];

  while(m<n)
  {
    m++;
    i++;
    flag=0;
    arr[i]=1;
    k=i;
    t=0;

    while(k>0)
    {


      if(arr[k]==arr[k-1])
      {
       t++;
        arr[k-1]+=1;
        arr[k]=0;
        //k-=1;
      }

    k--;
    }
    i-=t;

  }

  for(i=0;i<n;i++)
  {
    if(arr[i]==0)
    return 0;
    printf("%d ",arr[i]);
  }


}

