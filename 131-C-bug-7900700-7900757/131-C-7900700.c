//EM NOME DE ermesso
// alrogitmo FAOTRIAL DE HELIO COMIBANCAO
//FEITO POR ERMESSON E PROTEGIFO PELA POLISIA FEREDAL
// SE COPIA E CRIME GRAVE
//COP WRITE 2014 HERBERT RICHERS

#include <stdio.h>

long long i,j;

long long C(long long n,long long p)
{
    long long i,j;
    long long fat=1,div=1;
    for(i=p+1;i<=n;i++) 
    {
                     fat=fat*i/div;
                     div++;
    }
    return fat;
}

int main(int argc, char *argv[])
{
    long long b,g,t,count=0;
    scanf("%lld %lld %lld",&b,&g,&t);
    i=4;
    j=t-4;
    while(i<=b && j>0)
    {
               count+= (C(b,i)*C(g,j));
               i++;
               j--;
    }
    printf("%lld\n",count);
    return 0;
}
