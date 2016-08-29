#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[200], b[200], i, j, n, flag, count, min, max, slag;

    scanf("%d", &n);
    for( i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for( i=0, count=0, flag=0; i<n; i++ ){
        if(a[i]==0 ) count++;
        if( a[i]<0 ) flag++;
    }
    if( count==n || (flag+count==n && flag==1 &&count>0) ) printf("0\n");
    else{

        for( i=0, min=1000, count=0, j=0; i<n; i++ )
        {
            if( a[i] < min ) min = a[i];
            if( a[i]<0 ) count++;
            if( a[i]==0 ) continue;
            b[j++] = a[i];
        }
        n=j;
        if( n==1 ) printf("%d\n", a[0]);
        else if( count>0 && count%2==1 )
        {
            max = -1000;
            for( i=0; i<n; i++ )
            {
                if( b[i]<0 )
                {
                    if( b[i]>max ) max=b[i];
                }
            }
            for( i=0, flag=0, slag=0; i<n; i++ )
            {
                if( b[i]==max ){
                    if( slag==0 ){
                        slag=1;
                        continue;
                    }
                }
                if( flag==0 ) {
                    printf("%d", b[i]);
                    flag=1;
                    continue;
                }
                printf(" %d", b[i]);
            }
            printf("\n");
        }
        else
        {
            for( i=0; i<n; i++ )
            {
                if( i==0 ) printf("%d", b[i]);
                else printf(" %d", b[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
