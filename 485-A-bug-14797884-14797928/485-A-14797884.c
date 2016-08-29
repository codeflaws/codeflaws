#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,i,j,k,f=1;
    scanf("%d %d",&a,&b);
    while(a){
        c=a%b;
        j=a+c;
        //printf("%d\n",c);
        if(j==a){f=0;break;}
        if(a>b*b) break;
        a=a+c;
    }
    if(f) printf("No");
    else printf("Yes");
    return 0;
}
