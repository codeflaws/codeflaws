#include<stdio.h>

int main(int argc, char *argv[])
{
    char n[2];
    scanf("%s",n);
    int d=1,i;
    for(i=0;i<2;i++){
        if(n[i]=='0')d*=2;
        else if(n[i]=='1')d*=7;
        else if(n[i]=='2')d*=2;
        else if(n[i]=='3')d*=3;
        else if(n[i]=='4')d*=3;
        else if(n[i]=='5')d*=2;
        else if(n[i]=='6')d*=2;
        else if(n[i]=='7')d*=5;
        else if(n[i]=='8')d*=1;
        else if(n[i]=='9')d*=2;
    }
    printf("%d",d);
    return 0;
}
