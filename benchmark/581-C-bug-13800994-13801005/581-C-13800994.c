#include <stdio.h>

int min(int num, int num2)
{
    if(num > num2)
        return num2;
    else
        return num;
}

int main(int argc, char *argv[])
{
    int n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    int temp;
    int rating = 0;
    int rating_skills[10];
    for(i = 0;i < 10;i++)
        rating_skills[i] = 0;

    int rating_skills2[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&temp);
        rating += temp/10;
        rating_skills[temp % 10]++;
        rating_skills2[i] = 10 - temp/10;
        if(temp % 10 != 0)
            rating_skills2[i]--;
    }
    for(i = 9;i > 0;i--)
    {
        rating += min(rating_skills[i], k / (10-i) );
        k -= rating_skills[i] * (10-i);
        if(k < (10-i))
            break;
    }
    if(k > 9)
    {
        k /= 10;
        for(i = 0;i < n;i++)
        {
            rating += min(rating_skills2[i],k);
            k -= rating_skills2[i];
            printf("%d %d ",rating,rating_skills2[i]);
            if(k < 1)
                break;
        }
    }
    printf("%d",rating);
    return 0;
}
