#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b,c=0,d=0,i,j,k,l;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
 l=0;
 for(j=1;j<i;j++){
    l=l+j;
 }
                if(c+l<=a){
            for(j=1;j<=i;j++){

                c=c+j;

            }

            d++;


            }


        }



        printf("%d",d);

    printf("\n");
    return 0;
}
