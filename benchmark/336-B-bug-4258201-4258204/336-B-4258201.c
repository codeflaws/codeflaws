#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int  m,R,i; float x=0,S=0,k;
    scanf("%d%d",&m,&R);
    k = sqrt(2);
    S =2*m*R + 2*(m-1)*R*(2+k);
    for(i=2;i<m;i++)
    S += 4*R*(m-i)*(1+k+(i-2));
    printf("%.10f",S/(m*m));
    return 0;
    }
   