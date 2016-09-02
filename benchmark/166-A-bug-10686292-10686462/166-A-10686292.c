#include <stdio.h>
#include <stdlib.h>

struct team
{
    int prob ;
    int penality;
};

int main(int argc, char *argv[])
{
    int n , k  , i , counter = 0 , j ;
    scanf("%d%d",&n ,&k);
    struct team array[n];
    struct  team temp ;

    for(i=0 ; i < n ; i++)
    {
        scanf("%d",&array[i].prob);
        scanf("%d",&array[i].penality);

    }


            for(i=1; i<n; i++)
            {
                temp.prob = array[i].prob ;
                temp.penality = array[i].penality;
                int position=i;
                while((temp.prob>array[position-1].prob)||(temp.prob==array[position-1].prob&&temp.penality>array[position-1].penality)&&position>0)
                {
                    array[position].penality=array[position-1].penality;
                    array[position].prob=array[position-1].prob;
                    position--;
                }
                array[position].penality=temp.penality;
                array[position].prob=temp.prob;
            }





    temp.penality=array[k-1].penality;
    temp.prob=array[k-1].prob;
    for(i = 0 ; i < n ; i++)
    {

        if((array[i].penality==temp.penality)&&(array[i].prob==temp.prob))
            counter ++ ;
    }
         printf("%d",counter);
    return 0;
}
