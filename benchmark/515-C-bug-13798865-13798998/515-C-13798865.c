#include <stdio.h>

int main(int argc, char *argv[])
{
int n;scanf("%d",&n);
int i;
int data[10]={0};
char x;
getchar();
for(i=0;i<n;i++)
{
    scanf("%c",&x);
	data[x-'0']++;
}
int a2=data[2]+2*data[4]+data[6]+3*data[8]+3*data[9];
int a3=data[3]+data[4]+data[6]+2*data[9];
int a5=data[5]+data[6];
int a7=data[7]+data[8]+data[9];
for(i=0;i<a7;i++)
{
putchar('7');
}
for(i=0;i<a5;i++)
{
putchar('5');
}
for(i=0;i<a3;i++)
{
putchar('3');
}
for(i=0;i<a2;i++)
{
putchar('2');
}
return 0;
}