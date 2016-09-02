#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){

    int i , j=0 , len , n , a[101] ;

    scanf("%d",&n) ;

    char s[101][101] ;

    for(i = 0 ; i <= n ; i++)
    {
        gets(s[i]) ;
        if(strlen(s[i]) < 11 ){
                puts(s[i]);
                printf("\n");
        }
        else {
            printf("%c%d%c",s[i][0],strlen(s[i])-2,s[i][strlen(s[i])-1]) ;
            printf("\n");
        }

    }
    return 0;
}
