#include <stdio.h>

int power(int a, int b)
{
    if(b==1)
        return a;
    if(b%2==0)
    {
        b/=2;
        return power(a, b)*power(a,b);
    }
    else
        return a*power(a, b-1);
}

int main(int argc, char *argv[])
{
    int p, i, j, count=0, pow[2001];
    scanf("%d", &p);
    //printf("%d\n", power(3,2));
    
    for(i=2; i<p; i++)
    {
        int flag=0;
        pow[0]=1;
        for(j=1; j<p-1; j++)       
        {
           pow[j]=((i%p)*(pow[j-1]%p))%p;
           //printf("pow(%d, %d)=%d\n", i, j, pow[j]);
           if((pow[j]-1) % p ==0)
           {
               //printf("breaking\n");
               flag=1;
               break;
           }
        }
        
        if(flag==0)
        {
            pow[p-1]=((pow[p-2] %p)*(i%p))%p;
            //printf("here at i=%d j=%d pow[j]=%d \n", i, j, pow[j]);
            if((pow[p-1]-1) % p==0)
            {
                //printf("%d\n", i);
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}