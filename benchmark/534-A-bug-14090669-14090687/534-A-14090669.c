#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<string.h>
#include<strings.h>
int min(int,int,int);
int main(int argc, char *argv[]){
  int n ;
  scanf("%d",&n);
  if(n<3)printf("0\n");
  else if(n==3)printf("2\n1 3\n");
  else{
        printf("%d\n",n);
    int i;
    for(i= n/2 +1 ; i<((n%2==0)?n+1:n) ;i++){
        printf("%d %d%s",i,i-(n/2),(i==n)?"\n":" ");
    }
    if(n%2==1)printf("%d\n",n);
  }
 return 0;
}
