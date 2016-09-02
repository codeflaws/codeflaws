#include<stdio.h>
int main(int argc, char *argv[])
{
    int i=0,s,added,bal;
    char month[15];
    scanf("%s %d",month,&added);
    if (month[i]=='J')
    {
        if (month[i+3]=='u') s=1;
        else if (month[i+3]=='e') s=6;
        else if (month[i+3]=='y') s=7;
    }
    else if (month[i]=='F') s=2;
    else if (month[i]=='A') 
    {
        if (month[i+1]=='p') s=4;
        else if (month[i+1]=='u') s=8;
    }
    else if (month[i]=='M')
    {
        if (month[i+2]=='r') s=3;
        else  s=5;
    }
    else if (month[i]=='S') s=9;
    else if (month[i]=='O') s=10;
    else if (month[i]=='N') s=11;
    else if (month[i]=='D') s=12;
    bal=(added+s)%12;
    if (bal==1) printf("January");
    if (bal==2) printf("February");
    if (bal==3) printf("March");
    if (bal==4) printf("April");
    if (bal==5) printf("May");
    if (bal==6) printf("June");
    if (bal==7) printf("July");
    if (bal==8) printf("August");
    if (bal==9) printf("September");
    if (bal==10) printf("October");
    if (bal==11) printf("November");
    if (bal==12) printf("December");
    
return 0;
}