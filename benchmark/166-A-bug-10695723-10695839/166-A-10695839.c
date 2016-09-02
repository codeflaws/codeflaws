#include <stdio.h>
#include <stdlib.h>
struct object
{
    int problems;
    int time;
};
void swap(struct object a[],int x, int y)
{
    struct object temp= a[x];
    a[x]=a[y];
    a[y]=temp;
}
void BubbleSort (struct object A[], int arraySize)
{
    int i, j;
    for(i = 0; i < arraySize; i++)
    {
        for(j = 0; j < arraySize-1; j++)
        {
            if((A[j].problems < A[j+1].problems)||((A[j].problems ==A[j+1].problems)&&(A[j].time >A[j+1].time)))
                swap(A, j, j+1);

        }
    }
}
int main(int argc, char *argv[])
{
    struct object arr[50];
    int i,num,place,j;
    scanf("%d %d",&num, &place);
    for(i=0; i<num; i++)
    {
        scanf("%d %d", &arr[i].problems, &arr[i].time);
    }
    BubbleSort(arr,num);
    int counter=0;
    struct object target=arr[place-1];    /*starting from 0*/
    for(j=0; j<num; j++)
    {
        if((arr[j].problems==target.problems)&&(arr[j].time==target.time))
        {
            counter++;
        }
        if(arr[j].problems<target.problems)
        {
            break;
        }
    }
    printf("%d",counter);
    return 0;
}
