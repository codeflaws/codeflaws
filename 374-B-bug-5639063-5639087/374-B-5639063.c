#include<stdio.h>
#include<string.h>
#include<math.h>

int main(int argc, char *argv[])
{
    char a[1000000];
    long long int i,j,k,p=1;
    scanf("%s",a);
    k=strlen(a);
    i=0;
  while((i+1)<k)
  {
          j=0;
          while(((a[i]-48) + (a[i+1]-48))==9 && (i+1)<k)
          {
                  i++;
                  j++;
          }
          if(j%2==0  && j!=0)
                p=p*2;
                i++;
  }
    printf("%lld\n",p);
    
}
