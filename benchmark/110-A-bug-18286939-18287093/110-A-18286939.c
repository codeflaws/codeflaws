#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int i , j ,k , l ,m ,n, counter=0 ,ct=0,a,b,c;
    scanf("%lld" , &n);
    while(n>10)
    {
         counter++;
        a = n%10;
        b = n/10;
        if(a==4 || a==7)
            {
                ct++;
            }

        if(b<10)
        {
            counter++;
            if(b==4 || b==7)
            {
                ct++;
            }

            break;
        }
        else
        {
            n= b;
            a = 0;
            b = 0;
        }
    }
    if(ct==4 || ct==7 || ct==counter)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
   // printf("%lld\n" , ct);
    //printf("%lld\n" , counter);
    return 0;
}
