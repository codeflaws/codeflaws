#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,x,rem,z,flag=0;
    scanf("%d%d",&n,&m);
    x=n/2;
    rem=n%2;
    z=x+rem;
    if(z%m==0) {
        printf("%d",z);
    }
    else {
        while(1) {
            z=z+1;
            if(z%m==0) {
                flag=1;
                break;
            }
            else if(z>n&&z%m!=0) {
                flag=2;
                break;
            }
        }
        if(flag==1) {
        printf("%d",z);}
        else if(flag==2) {
            printf("-1");
        }
    }
return 0;
}
