# include <stdio.h>
//# include <conio.h>

int main(int argc, char *argv[])
{
    int n,c,i,max,num,diff;
    scanf("%d%d", &n, &c);
    int price[n];
    
    for(i = 0; i < n; i++)
    {
          scanf("%d", &price[i]);
    }
    
    max = 0;
    for(i = 0; i < n-1; i++)
    {
          diff = price[i] - price[i+1];
          if(max < diff){
                 max = diff;
          }
    }
    
    num = max - c;
    
    printf("%d", num);
    
    
    return 0;
}
