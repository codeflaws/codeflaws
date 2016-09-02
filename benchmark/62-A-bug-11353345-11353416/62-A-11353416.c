#include <stdio.h>

int main(int argc, char *argv[])
{
    int boyr, boyl, girlr, girll;

    scanf("%d %d %d %d", &girlr, &girll, &boyr, &boyl);

    if(((girlr-1)<=boyl && boyl<=(girlr+1)*2) || ((girll-1)<=boyr && boyr<=(girll+1)*2))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
