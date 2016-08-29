#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,k,i,j,m,g,c1,temp;

    int children[200]={0};

    scanf("%d %d",&n,&k);

    temp = k;

    for(i=0;i<k;i++){
            scanf("%d",&children[i]);
    }
    for(i=0;i<k;i++){

        printf("%d ",children[i]);

        j = 1;

        for(m=1;m<=(n*k);m++){

            if(j>(n-1)){
                //printf("hello.\n");
                break;
            }

            c1 = 1;

            for(g=0;g<temp;g++){

                if(m == children[i] || m== children[g]){
                    c1 = 0;
                    break;

                 }
            }
            if(c1==1){
                children[temp] = m;
                temp = temp +1;
                printf("%d ",m);
                j = j +1;
            }
        }
        printf("\n");
    }








    return 0;
}


