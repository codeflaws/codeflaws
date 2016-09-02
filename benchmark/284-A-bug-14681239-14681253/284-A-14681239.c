#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    long p,i,j,x,cont,div;
    scanf("%li", &p);
    cont = 0;
    for(i=2;i<=p;i++)
    {
        x=1;
        div = 0;
        for(j=1;j<=p-2;j++)
        {
            x=(x*i)%p;
            if(x==1)
            {
                div =1;
            }
        }
        if(div == 0 && (x*i)%p==1)
        {
            cont++;
        }
    }
    printf("%li\n", cont);
    return 0;
}
