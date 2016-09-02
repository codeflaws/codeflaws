#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    char s[5], t[5] ;
    int a,b,c,d,p,q,r,u,e,f,m,h ;
    scanf("%s", &s);
        a = s[0]- '0' ;
    b = s[1] - '0' ;
    //printf("%d %d\n",a,b);
    c = 10 * a + b ;
    a = s[3]- '0' ;
    b = s[4] - '0' ;
    //printf("%d %d\n",a,b);
     d = 10 * a + b ;
    scanf("%s", &t);
   // printf("\n   %c   \n", s[0]);

    p = t[0]- '0' ;
    q = t[1] - '0' ;
    //printf("%d %d\n",a,b);
    e = 10 * p + q ;
    r = t[3]- '0' ;
    u = t[4] - '0' ;
    //printf("%d %d\n",a,b);
    f = 10 * r + u ;
  //  printf("%d %d %d %d\n", c,d,e,f);
    if(c < e){
        h = 24 + c - e ;
         }
    else{
        h = c - e ;
        }
    if(d < f){
        m = 60 + d - f ;
        h-- ;
        }
    else{
        m = d - f ;
        }
    if(m < 10 && h < 10){
       printf("0%d:0%d",h,m);
       }
    else if( m < 10){
            printf("%d:0%d",h,m);
            }
    else if( h< 10){
            printf("0%d:%d",h,m);
            }
     else{
        printf("%d:%d",h,m);
     }
        return 0;
        }
