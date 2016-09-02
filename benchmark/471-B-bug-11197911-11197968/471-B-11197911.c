#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, n, temp;
    int index[2001];
    int diff[2001];
    int plan2[2001];
    int plan3[2001];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &diff[i]);
        index[i] = i+1;

    }
    for(i = n-1; i >= 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(diff[j] > diff[j+1])
            {
                temp = diff[j];
                diff[j] = diff[j+1];
                diff[j+1] = temp;
                temp = index[j];
                index[j] = index[j+1];
                index[j+1] = temp;
            }
        }
    }
    int count = 0;
    for(i = 0; i < n, count < 2; i++)
    {
         if(diff[i] == diff[i+1])
         {
             count++;
         }
    }
    if(count < 2) printf("NO\n");
    else
    {
        printf("YES\n");
        for(i = 0; i < n; i++)
        {
            plan2[i] = index[i];
            plan3[i] = index[i];
        }
        int hen = 0, ten = 0;
        for(i = 0; i < n; i++)
        {
            if(hen < 1)
            {
                if(diff[i] == diff[i+1])
                {
                    temp = plan2[i];
                    plan2[i] = plan2[i+1];
                    plan2[i+1] = temp;
                    hen++;
                }
            }
            if(ten < 1)
            {
                if(diff[n-1-i] == diff[n-2-i])
                {
                    temp = plan3[n-1-i];
                    plan3[n-1-i]= plan3[n-2-i];
                    plan3[n-2-i] = temp;
                    ten++;
                }
            }
            if(hen == 1 && ten == 1)
            {
                break;
            }
        }
        for(i = 0; i < n; i++)
        {
            printf("%d ", index[i]);
        }
        printf("\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", plan2[i]);
        }
        printf("\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", plan3[i]);
        }
        printf("\n");
    }
    return 0;
}
