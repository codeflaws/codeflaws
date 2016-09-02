#include<stdio.h>
int main(int argc, char *argv[]){
    int n,m,c,k,i;
    scanf("%d%d",&n,&m);
    int j=1;
    c=0;

    for(i=1;i<100;i++)
    {


                if(n==0)
                    {
                            break;
                    }


                if(i%m!=0){
                c++;
                n--;
                }

            else
            {

                c=c+1;


            }
    }







printf("%d",c);
return 0;

}
