#include <stdio.h>

int main(int argc, char *argv[])
{
    int boyr, boyl, girlr, girll;

    scanf("%d %d %d %d", &girlr, &girll, &boyr, &boyl);

    if(((girlr<=boyl+1) && (boyl+1/2<=girlr+1)) || ((girll<=boyr+1) && (boyr+1/2<=girll+1)))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
