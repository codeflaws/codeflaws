#include<stdio.h>
int main(int argc, char *argv[])
{
int n,p,q,c=0;
scanf("%d",&n);
while(n--)
{
scanf("%d%d",&p,&q);
if((p+2)<=q)
c++;
printf("%d",c);
}

}
