#include<stdio.h>

int main(int argc, char *argv[]){

int n,m,z;

scanf("%d %d", &n,&m);

if(m<=n/2)

    z = m+1;


else
    z=m-1;

if(z==0)
    z=1;

printf("%d",z);

return 0;
}