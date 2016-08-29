#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int min(int a,int b){
    int m;
    m=(a<b)?a:b;
    return m;
}

int main(int argc, char *argv[])
{
  char a[110];
  int l,i,j=0,n=0,e=0,t=0,m;
  gets(a);
  l=strlen(a);
  for(i=0;i<l;i++){
    if(a[i]=='n'){
        n++;
    }
    }
     for(i=0;i<l;i++){
    if(a[i]=='e'){
        e++;
    }
    }
     for(i=0;i<l;i++){
    if(a[i]=='t'){
        t++;
    }
    }
     for(i=0;i<l;i++){
    if(a[i]=='i'){
        j++;
    }
    }
    if(n<=2) n=0;
    else if(n==4) n=1;
    else n=(n+2)/3;


    e=e/3;
    m=min(min(min(n,e),t),j);
    printf("%d",m);

    return 0;
}
