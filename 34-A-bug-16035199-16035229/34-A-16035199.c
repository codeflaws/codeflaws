#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int count ,i, height,minimal;
    int heightArray[100],diffArray[100] ;
    scanf("%d",&count);
    for(i=0 ; i<count ; i++)
    {
        scanf("%d", &height) ;
        heightArray[i] = height  ;
    }
    for(i=0 ; i<count ; i++)
    {
        diffArray[i] = abs( heightArray[i%count]-heightArray[(i+1)%count] )  ;
    }
    for(i=minimal=0; i<count ; i++)
    {
        if( diffArray[minimal]>diffArray[i%count] )
            minimal = i ;
    }
    printf("%d %d",minimal%count,(minimal+1)%count) ;
    return 0;
}
