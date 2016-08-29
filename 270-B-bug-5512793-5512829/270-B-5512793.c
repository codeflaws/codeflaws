#include <stdio.h>
//#include<conio.h>

int main(int argc, char *argv[]) {
    
    int n,i,c=0;
    int a[10000];
    scanf("%d",&n);
    
    
    
    for(i=1;i<=n;i++)
    {
            scanf("%d",&a[i]);}
    for(i=n;i>1;i--)
    {
         if(a[i]<a[i-1]){
         c=i-1;break;}
         }
 printf("%d",c);
    //getch();
    return 0;
}
