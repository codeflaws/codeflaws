#include <stdio.h>
#include <stdlib.h>

void bubble (int unsort_array3[],int n3)
{
    int temp ;
    for(int i=0 ;i<n3 ;i++)
    {
      if(unsort_array3[i] > unsort_array3[i+1])
      {
         temp=unsort_array3[i+1];
         unsort_array3[i+1]=unsort_array3[i];
         unsort_array3[i]=temp;
      }
    }
    if(n3>1)
    {
      bubble(unsort_array3,n3-1);
    }
}

void greedy(int arr[],int n,int data)
{
    int i=0;
    while(data>0)
    {
        data=data-arr[n];
        n--;
        i++;
    }
    printf("%d",i);
}

void getarray(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

int main(int argc, char *argv[])
{
    int data,usbs;
    scanf("%d%d",&usbs,&data);
    int arr[usbs];
    getarray(usbs,arr);
    bubble(arr,usbs-1);
    greedy(arr,usbs-1,data);

    return 0;
}
