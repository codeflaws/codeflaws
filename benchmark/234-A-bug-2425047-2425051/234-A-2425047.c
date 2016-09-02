#include<stdio.h>
//#include<conio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,half,i=0;
    char a[200];
    scanf("%d",&n);
    fflush(stdin);
    gets(a);
    half=n/2;
    while(i<half)
    {
          if(a[i]=='R'&&a[i+half]=='L')
          {
                                       printf("%d %d\n",(i+half+1),(i+1));
                                                                    
          }       
          else
          {
                  printf("%d %d\n",(i+1),(i+half+1));    
          }
          i++;
    }
   // getch();
    return 0;    
}
