#include <stdio.h>                                                                    
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

#define ll long int
#define MOD 1000000007
#define MAX(a,b)                     (a>b ? a:b)
#define MIN(a,b)                     (a<b ? a:b)
#define arrlen(arr) (sizeof(arr) / sizeof(arr[0]))
#define loop(x, y, n) for(x=y; x<n; x++)
#define readli(x)  scanf("%ld",&x)

int cmpf(const void * a, const void * b){
        if(*(ll *)a > *(ll *)b)
                return 1;
        else if(*(ll *)a < *(ll *)b)
                return -1;
        else
                return 0;
}
int main(int argc, char *argv[]){
        ll t,i,a=0,c=0,arr[100];
        char str[110000];
        readli(t);
        scanf("%s",str);
        loop(i,0,50){
                arr[i]=0;
        }
        loop(i,0,strlen(str)){
                arr[str[i]-'a']++;
                if(arr[str[i]-'a']>=2){
                        c++;
                        a--;
                }
                else
                        a++;
        }
        if(c>26-a)
                printf("-1\n");
        else{
//                c=0;
  //              loop(i,0,26){
    //                    c += arr[i]-1;
      //          }
                printf("%ld\n",c);
        }

        return 0;
}


