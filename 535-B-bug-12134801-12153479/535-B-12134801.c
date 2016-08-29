#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    long int n,pos=0,i=1;
    scanf("%ld",&n);
    while(n!=0)
    {
        int dig=n%10;
        if(dig==4)
        {
            pos+=pow(2,i)-1;
        }
        else if(dig==7)
        {
            pos+=pow(2,i);
        }
        i++;
        n=n/10;
    }
    printf("%ld",pos);
    return 0;
}
