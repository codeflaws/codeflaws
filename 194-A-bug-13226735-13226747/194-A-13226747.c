# include <stdio.h>
//# include <conio.h>

int main(int argc, char *argv[])
{
    int n,k,num1,num2,count;
    scanf("%d%d", &n, &k);
    
    num1 = n*2;
    num2 = k - num1;
    count = n - num2;
    if(count <= 0){
             count = 0;
             }
    
    printf("%d", count);
    return 0;
}
