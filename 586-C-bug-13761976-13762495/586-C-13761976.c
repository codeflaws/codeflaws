#include <stdio.h>
#include <stdlib.h>
int z[5000],p[5000],h[5000];
int t[5000],isplakao[5000];
int main(int argc, char *argv[])
{
    long long plac=0;
    int n,i,q,res=0,j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d%d%d",&z[i],&p[i],&h[i]);
        t[i]=0;
        isplakao[i]=0;
    }
  /*  for (i=0;i<n;i++){
         printf("%d ",h[i]);
    }*/

    for (i=0;i<n;i++){
        plac=0;
        if (h[i]>=0){
            t[i]=1;
            res++;
            j=i+1;
            while ((z[i]>0)&&(j<n)){
                h[j]-=z[i];
                z[i]--;
                j++;
            }
            /*printf("posle plakanja iz ordinacije");
            for (q=0;q<n;q++){
                printf("h[%d]=%d    ",q,h[q]);
            }
            printf("\n");*/
            for (j=i+1;j<n;j++){
                if ((long long)h[j]<plac) h[j]=-1;
                if ((h[j]<0)&&(isplakao[j]==0)){
                    plac+=(long long)p[j];
                    isplakao[j]=1;
                }
               // printf("j=%d plac je %lld\n ",j,plac);
            }
            /*printf("Kad se svi isplacu\n");
            for (q=0;q<n;q++){
                printf("h[%d]=%d    ",q,h[q]);
            }
            printf("\n");*/
        }

    }
    printf("%d\n",res);
    for (i=0;i<n;i++){
        if (t[i]==1) printf("%d ",i+1);
    }
    return 0;
}
