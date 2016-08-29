#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1000001
char a[N];
int main(int argc, char *argv[]){

int i=0,op=0,k=0;
scanf("%s",a);
while(a[i]){

if(a[i]==')' && op==0) { i++; continue; }
if(a[i]==')' && op>0) { op--; k+=2; }
if(a[i]=='(') op++;

i++;
}
printf("%d\n",k);
return 0;
}
