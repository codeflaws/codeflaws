#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char s[1001] ;
    int k , i, j,sum=0 ,a[27],m=0,temp;
    scanf("%s",s);
    scanf("%d",&k);
    for(i=0;i < 26 ;i++ ){
        scanf("%d", &a[i]) ;
        if( m < a[i]){
            m = a[i] ;
            }
        }
    j = strlen(s) ;
    for(i=0 ;i<j;i++){
        temp = s[i] - 'a' + 1 ;
        sum += temp * a[temp-1] ;
       // printf("string sum %d\n", sum);
        }
    //printf("%d %d %d\n",m,k,j);
    sum += m* k * (k+1) / 2 + k * j * m ;
    printf("%d", sum);

    return 0;
    }
