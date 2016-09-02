#include <stdio.h>
#include <math.h>
#define PI 3.1415926536

int main(int argc, char *argv[])
{
    int n;
    int b,i,j;
    int r[120];
    int s=0;
    scanf("%d",&n);
    
    for (i=0;i<n;i++) {
        scanf("%d",&r[i]);
    }
    
    for (i=0;i<n;i++) {                   
        for (j=i;j<n;j++) {
            if (r[i]<r[j]) {
                b = r[j];
                r[j] = r[i];
                r[i] = b;
            }
        }
    }
    
    for (i=0;i<n;i++) {
        s += pow(-1,i%2)*r[i]*r[i];
      printf ("%d %d\n",r[i],s); 
    }
    //.............
    printf("%.10f",s*PI);
return 0;
}