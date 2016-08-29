#include <stdio.h>
int main(int argc, char *argv[]){
    int n, m,k,i, l=0, a[1001] ;
    scanf("%d %d %d", &n, &m, &k);
    for(i=0;i < n;i++){
        scanf("%d",&a[i]);
        }
     for(i=0;i < n;i++){
        if(a[i] == 1){
            if(m == 0){
               l++ ;
               }
            else{
             m-- ;
             }
             }
        else{

            if(k==0 && m== 0){
                l++ ;
                }
            else if(k > 0){
                k-- ;
            }
                else{
                m-- ;
                }
                }
     }
            printf("%d",l);
            return 0;
            }
