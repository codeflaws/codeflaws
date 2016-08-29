#include <stdio.h>
#include <math.h>

int n;
int k;
int count;
int prime[1000];

int isPrime(int x)
{
    int i = 0;
    for (i = 2; i <= (int)sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

void buildPrime()
{
    int i = 0;
    for (i = 2; i <= 1000; i++)
        if (isPrime(i))
        {
            prime[count] = i;
            ++count;
        }
}

int main(int argc, const char * argv[]) {
    
    count = 0;
    
    scanf("%d %d", &n, &k);
    
    buildPrime();
    
    int i  = 0;
    int w = 0;
    int sum = 0;
    
    for (i = 0; i < count -1; i++)
    {
        sum = prime[i] + prime[i+1] + 1;
        if (sum > n)
            break;
        else
            if (isPrime(sum))
                ++w;
    }
    
    if (w >= k)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}