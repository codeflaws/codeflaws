#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char * A,int a, int b)
{
    char temp = A[a];
    A[a] = A[b];
    A[b] = temp;
}
void QuickSort(char *A,int l,int r)
{
    if(r-l<=1)
    return;
    int green,yellow=l+1;
    for(green=l+1;green<r;green++)
    {
        if(A[green] < A[l])
        {
            swap(A,yellow,green);
            yellow++;
        }
    }
    swap(A,l,yellow-1);
    QuickSort(A,l,yellow-1);
    QuickSort(A,yellow,green);
}
int main(int argc, char *argv[])
{
    int i,n,l1,l2,l3;
    char A[100],B[100],C[100];
    scanf("%s%s%s",A,B,C);
    l1 = strlen(A);
    l2 = strlen(B);
    l3 = strlen(C);
    strcat(A,B);
    
    QuickSort(A,0,l1+l2);
    QuickSort(C,0,l3);
    //printf("%s\n",A);
    //printf("%s\n",C);
    if(strcmp(A,C)==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}