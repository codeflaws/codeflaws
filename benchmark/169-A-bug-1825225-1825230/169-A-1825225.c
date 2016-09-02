#include<stdio.h>
void Merge(unsigned long long int * , int , int , int );
void MergeSort(unsigned long long int *array, int left, int right)
{
        int mid = (left+right)/2;
        if(left<right)
        {
                MergeSort(array,left,mid);
                MergeSort(array,mid+1,right);
                Merge(array,left,mid,right);
        }
}
void Merge(unsigned long long int *array, int left, int mid, int right)
{
        int tempArray[right-left+1];
        int pos=0,lpos = left,rpos = mid + 1;
        while(lpos <= mid && rpos <= right)
        {
                if(array[lpos] < array[rpos])
                {
                        tempArray[pos++] = array[lpos++];
                }
                else
                {
                        tempArray[pos++] = array[rpos++];
                }
        }
        while(lpos <= mid)  tempArray[pos++] = array[lpos++];
        while(rpos <= right)tempArray[pos++] = array[rpos++];
        int iter;
        for(iter = 0;iter < pos; iter++)
        {
                array[iter+left] = tempArray[iter];
        }
        return;
}
int main(int argc, char *argv[])
{
        int n,i,a,b;
        scanf("%d%d%d",&n,&a,&b);
        unsigned long long int h[2000];
        for(i = 0;i <n;i++)
        {
                scanf("%I64u",&h[i]);   
        }
        MergeSort(h,0,n-1);
    printf("%I64u",h[a+1]-h[a]);
    return 0;
}
