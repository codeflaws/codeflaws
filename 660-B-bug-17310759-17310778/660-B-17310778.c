#include <stdio.h>
int main(int argc, char *argv[])
{
    int r;
    int p;
    int i,j;
    scanf("%d",&r);
    scanf("%d",&p);
    i=1;j=((4*r)/2)+1;
    while(i<=((4*r)/2)||j<=p)
    {
        if(j<=p){
        printf("%d ",j);
        j++;}
        if(i<=2*r) {

                if(i<=p)
                {
                    printf("%d ",i);
                }
                i++;
                    }

    }


return 0;
}
