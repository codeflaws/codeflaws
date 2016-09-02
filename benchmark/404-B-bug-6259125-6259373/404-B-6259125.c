#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int n=16,counter=0;
void queens(int column, int row , int diagonal1 , int diagonal2){
    if(column==n){
        counter++;
        return;
    }
    int i;
    for(i=0;i<n;i++){
        if((row&(1<<i))==0 && (diagonal1&(1<<(i-column+n)))==0 && (diagonal2&(1<<(i+column)))==0 ){
            row|=(1<<i);
            diagonal1|=(1<<(i-column+n));
            diagonal2|=(1<<(i+column));
            queens(column+1,row,diagonal1,diagonal2);
            row&=~(1<<i);
            diagonal1&=~(1<<(i-column+n));
            diagonal2&=~(1<<(i+column));

        }
    }

}

int main(int argc, char *argv[]){

    double a,d;
    int n;
    scanf("%lf %lf",&a,&d);
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        double temp=i*d;
        int pos=temp/a;
        double x,y;
        if( pos%2!=0 && ((pos+1)%2)==0 && ((pos+1)%4)!=0 ){
            x=a;
            y=temp-(pos*a);
        }
        else if(pos%2==0 && pos%4!=0){
            x=a-(temp-(pos*a));
            y=a;
        }
        else if(pos%2!=0 && ((pos+1)%4)==0){
            x=0;
            y=a-(temp-(pos*a));
        }
        else if(pos%4==0){
            y=0;
            x=temp-(pos*a);
        }
        printf("%lf %lf\n",x,y);
    }
    return 0;
}
