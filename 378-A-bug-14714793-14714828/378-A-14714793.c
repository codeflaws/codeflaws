#include<stdio.h>

int main(int argc, char *argv[])
{
    int a,b,f,d,s,i,t1,t2;
    scanf("%d %d",&a,&b);
    for(i=1;i<=6;i++){
        t1=abs(a-i);
        t2=abs(b-i);
        if(t1<t2)
            f++;
        else if(t1==t2)
            d++;
        else if(t2<t1)
            s++;
    }
    printf("%d %d %d\n",f,d,s);

return 0;
}
