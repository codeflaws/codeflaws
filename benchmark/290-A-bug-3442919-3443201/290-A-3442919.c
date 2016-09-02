#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a,b) a>=b?a:b
#define min(a,b) a<b?a:b
#define MOD 1000000007
int main(int argc, char *argv[]){
    const char *a[]={"Washington ", "Adams ","Jefferson ","Madison ","Monroe", "Adams ","Jackson ","Van Buren ","Harrison", "Tyler ","Polk ","Taylor ","Fillmore ","Pierce ","Buchanan ","Lincoln ", "Johnson ","Grant ", "Hayes ","Garfield ","Arthur ", "Cleveland ","Harrison", "Cleveland ","McKinley ","T.Roosevelt ", "Taft ","Wilson ","Harding ","Coolidge ","Hoover ", "Roosevelt ","Truman", "Eisenhower" , "Kennedy" , "Johnson" , "Nixon" , "Ford" , "Carter" , "Reagan" , "Bush" ,"Clinton "};
    int n;
    scanf("%d",&n);
    printf("%s\n",a[n-1]);
    return 0;
}