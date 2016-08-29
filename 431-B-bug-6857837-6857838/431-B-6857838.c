#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#define MAX(x,y) (x)>(y) ? (x):(y)
#define MIN(x,y) (x)>(y) ? (y):(x)
#define scnn fscanf(stdin,"%i",&n)
#define scnnd fscanf(stdin,"%i %i",&n,&d)
#define scnmi fscanf(stdin,"%i",&m[i])
#define forn for(i=0;i<n;i++)
#define memmn m=(int *)malloc(n*sizeof(int))
#define fm free(m)
#define prntmn for(i=0;i<n;i++)fprintf(stdout,"%i ",m[i])



int main(int argc, char **argv)
{
int i,g[5][5],j,res,k,l,m,tmp,try;
for (i=0;i<5;i++)
for (j=0;j<5;j++)
{
    scanf("%i",&g[i][j]);
}
tmp=INT_MIN;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
for(k=0;k<5;k++)
for(l=0;l<5;l++)
for(m=0;m<5;m++)
{
if (i!=j && i!=k && i!=l && i!=m && j!=k && j!=l && j!=m && k!=l && k!=m && l!=m)
{
        try=g[i][j]+g[j][i]+g[k][l]+g[l][k]+g[j][k]+g[k][j]+g[l][m]+g[m][l]+g[k][l]+g[l][k]+g[l][m]+g[m][l];
        if(try>tmp) {tmp=try;res=try;}       
}
}
printf("%i",res);
return 0;
}
