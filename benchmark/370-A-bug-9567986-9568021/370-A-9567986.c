#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,x,y,z;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==c||b==d){
        x=1;
    }
    else{
        x=2;
    }
    if(((a%2!=0&&b%2!=0)&&(c%2==0&&d%2!=0))||((a%2!=0&&b%2!=0)&&(c%2!=0&&d%2==0))||((a%2==0&&b%2==0)&&(c%2==0&&d%2!=0))||((a%2==0&&b%2==0)&&(c%2!=0&&d%2==0))||((a%2==0&&b%2!=0)&&(c%2!=0&&d%2!=0))||((a%2==0&&b%2!=0)&&(c%2!=0&&d%2!=0))||((a%2!=0&&b%2==0)&&(c%2!=0&&d%2!=0))||((a%2!=0&&b%2==0)&&(c%2==0&&d%2==0))){
        y=0;
    }
    else{
        if((a-c)*(a-c)==(b-d)*(b-d)){
            y=1;
        }
        else{
            y=2;
        }
    }
    if((a-c)*(a-c)>(b-d)*(b-d)){
        z=sqrt((a-c)*(a-c));
    }
    else{
        z=sqrt((b-d)*(b-d));
    }
    printf("%d %d %d",x,y,z);
    return 0;
}
