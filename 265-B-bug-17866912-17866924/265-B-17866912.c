#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,k=0,timer=0,h=0;
    scanf("%d",&n);
    n--;
    int arboles[n];
    for(k=0;k<=n;k++)
    {
        scanf("%d",&arboles[k]);
    }
    for(k=0;k<=n;k++)
    {
        if(h<arboles[k])//SUBE
        {
            while(h!=arboles[k])
            {
                h++;
                timer++;
            }
        }else if(h>arboles[k])//BAJA
            {
                while(h!=arboles[k])
                {
                    h--;
                    timer++;
                }

            }
        if(h==arboles[k])//COME LA NUEZ
        {
            timer++;
        }
        if(k<=n-1)
        {
            if(h>arboles[k+1])
            {
                while(h!=arboles[k])
                {
                    h--;
                    timer++;
                }
                    timer++;
                }else{
                    timer++;
                }
        }


    }


    printf("\nTimer= %d",timer);
    return 0;
}
