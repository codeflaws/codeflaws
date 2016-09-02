#include <stdio.h> 
void quicksort(int x[100],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
int main(int argc, char *argv[])
{
    int n,tab[100],i,j,x,s=1,s1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&tab[i]);
        }
    
    scanf("%d",&x);
    quicksort( tab, 0,n-1);
    s1=1;
    i=0;
    while (i<n-1)
    {
        
    j=i+1;
    while(tab[j]-tab[i]<=x && j<n)
    {
        
    if (tab[j]-tab[i]==x)   s++;
    j++;
    }
    if (s1<s) s1=s;
    s=1;
    i++;
    }
    printf("%d",s1);
    return(0);
}