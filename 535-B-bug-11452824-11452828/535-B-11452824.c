/*you write down a number if it's a lucky
 number the program return its order else the program 
say that it's not a lucky number */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int longueur(int N)
{
    int S=1;
    while((N/10)!=0)
    {
        N=N/10;
        S++;
    }
return S;
}

int main(int argc, char *argv[])

{
    int N,i,R,r,p=0,*t,m=0;
    scanf("%d",&N);
    R=N;
    t=(int*)malloc(longueur(N)*4);
    for(i=0;i<longueur(N);i++)
    {
        r=R%10;
        R=R/10;
        if(r==4)t[i]=1;else if(r==7) t[i]=2;else m++;
        p+=pow(2,i)*t[i];
    }
        if(m==0)printf("The order of %d is: %d",N,p);
        else printf("%d is not a lucky number",N);
    return 0;
}
