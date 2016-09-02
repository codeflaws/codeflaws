#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,a,b,c,d[10];
    scanf("%d%d%d",&a,&b,&c);
    d[0]=a*b*c;
    d[1]=(a+b)*c;
    d[2]=a+(b*c);
    d[3]=a*(b+c);
      for(i=0;i<4;i++){
        if(d[0]<d[i]){
            d[0]=d[i];
        }
      }
        printf("%d",d[0]);

return 0;
}
