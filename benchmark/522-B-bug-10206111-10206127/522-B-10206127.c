#include <stdio.h>
#include <stdlib.h>

struct element
{
    int width;
    int height;
};

int main(int argc, char *argv[])
{
    struct element *arr;
    int count;
    int i;
    int w = 0, ind_h_max_main = 0, ind_h_max_secondary = 0;
    int w_cur;

    scanf("%d", &count);
    arr = malloc(sizeof(struct element) * count);
    for (i = 0; i < count; i++)
    {
        scanf("%d %d", &arr[i].width, &arr[i].height);
        w += arr[i].width;
    }

    if (arr[0].height > arr[1].height)
    {
        ind_h_max_main = 0;
        ind_h_max_secondary = 1;
    }
    else
    {
        ind_h_max_main = 1;
        ind_h_max_secondary = 0;
    }

    for (i = 2; i < count; i++)
    {
        if (arr[ind_h_max_secondary].height < arr[i].height)
        {
            if (arr[ind_h_max_main].height < arr[i].height)
            {
                ind_h_max_secondary = ind_h_max_main;
                ind_h_max_main = i;
            }
            else
                ind_h_max_secondary = i;
        }
    }

    //printf("max = %d, secondary = %d\n",ind_h_max_main,ind_h_max_secondary);

    for (i = 0; i < count; i++)
    {
        w_cur = w - arr[i].width;
        if (i == ind_h_max_main)
            printf("%d ",w_cur * arr[ind_h_max_secondary].height);
        else
            printf("%d ",w_cur * arr[ind_h_max_main].height);
    }
    free(arr);
    return 0;
}

