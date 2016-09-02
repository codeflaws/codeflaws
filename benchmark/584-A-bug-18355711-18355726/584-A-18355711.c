#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,t,x,i;

    scanf("%d %d",&n,&t);
    if(n==1&&t==10) printf("-1");
    else {
    printf("%d", t);
    for (i = 0; i < n - 1-(n%10==0); ++i) {
      printf("0");
    }
    puts("");
  }
  return 0;
}
