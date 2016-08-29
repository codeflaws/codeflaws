#include <stdio.h>
int main(int argc, char *argv[])
{
    long long int i,n,suma=0,suma_ctrl=0,cuenta=0,posibilidad=0;

    scanf ("%lld", &n);
    long long int v[n];
    for( i=0; i<n; i++)
    {
        scanf ("%lld", &v[i]);
        suma += v[i];
    }

    if( (suma%3) == 0)
    {
        for (i=0; i<= n-2; i++)
        {
            suma_ctrl+=v[i];
            if(suma_ctrl == suma)
            {
                posibilidad += cuenta;
            }
            if(suma_ctrl == suma/3)
            {
                cuenta++;
            }
        }
    }
    printf("%lld",posibilidad);
return 0;
}
