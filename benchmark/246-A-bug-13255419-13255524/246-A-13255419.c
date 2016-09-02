# include <stdio.h>
//# include <conio.h>

int main(int argc, char *argv[])
{
    int n, i;
    scanf("%d", &n);
    
    if(n == 1){
         printf("-1");
         }
    else{
         for(i = 0; i < n; i++){
               printf("%d ", (n-i));
               }
               }
                          
    return 0;
}
