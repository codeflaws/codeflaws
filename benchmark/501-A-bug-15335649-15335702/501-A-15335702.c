#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,m1,m2,m3;
      scanf("%d%d%d%d",&a,&b,&c,&d);
         m1=(3*a)/10;
         m2=a-(a/250)*c;
            if(m1<m2)
             m1=m2;
         m2=(3*b)/10;
         m3=b-(b/250)*d;
            if(m3>m2)
             m2=m3;
  
                if(m1>m2)
                    printf("Misha");
                  else if(m1<m2)
                     printf("Vasya");
                else
                    printf("Tie");
     return 0;                          
}
