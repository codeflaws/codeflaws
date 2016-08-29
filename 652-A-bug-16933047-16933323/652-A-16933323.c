#include<stdio.h>

int main(int argc, char *argv[])
{
    int h1,h2,a,b,k,c=0;
    scanf("%d %d",&h1,&h2);
    scanf("%d %d",&a,&b);
    k=8*a;
      if (a-b<=0 && 8*a<h2-h1) printf("-1");
      else {     while(k<h2-h1)
            {



                c++;
                k=k+12*(a-b);
            }


            printf("%d",c);
      }




    return 0;
}
