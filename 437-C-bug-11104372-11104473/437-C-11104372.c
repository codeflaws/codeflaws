#include <stdio.h>
#include <math.h>
#include <string.h>

long long int total[2000];
long long int energy[2000];
long long int adja[2000][2000];

int main(int argc, char *argv[]){

    long long int i,j,k,x,y,z,m,n;

    scanf("%lld %lld",&n,&m);

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&j);
        energy[i]=j;
    }

    z=0;
    for(i=1;i<=m;i++)
    {
        scanf("%lld %lld",&x,&y);
        if(energy[x]<energy[y]) z+=energy[x];
        else z+=energy[y];
    }

    printf("%lld",z);


}
