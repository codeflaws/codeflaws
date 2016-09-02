#include <stdio.h>
#include <stdlib.h>

void mySort(int ins,int A[ins]);

int main(int argc, char *argv[])
{
    int ins,numOfDayAllowed,allowedIns=0,counter,flag=1;
    int i,j,k;


    ///scan input (instruments & number of days allowed)
    ///number of days requried
    ///if num of day required  == num of days allowed
    ///then can learn all instruments  else use loop
    ///once getting the number of instruments
    ///output should be the number (th) can learnt

    scanf("%d %d",&ins,&numOfDayAllowed);

    int B[ins];
    int A[ins];

   for(i = 0;i<ins;i++)
   {
       scanf("%d",&A[i]);
       B[i] = A[i];
   }
   mySort(ins,A);
   for(counter=0; allowedIns + A[counter] <= numOfDayAllowed && counter < ins;counter++)
   {
       allowedIns = allowedIns + A[counter];
   }
   printf("%d\n",counter);

   for(k=0;k<counter;k++)
   {
       flag =1;
       for(j=0;j<ins && flag;j++)
       {
           if(A[k]==B[j])
           {
               printf("%d ",k+1);
               B[j] = 0;
               flag = 0 ;
           }
       }
   }




    ///addition for the total number of days


    return 0;
}


///selection sort

void mySort(int ins,int A[ins])
{
    int i,min,j,temp;
    for(i=0;i<ins-1;i++)
    {
        min = i;
        for(j=i+1;j<ins;j++)
        {
            if(A[min]>A[j])
            {
                min = j;
            }

        }
        ///swap
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
}
