#include<stdio.h>
#include<string.h>
char s[105];int c[26]={0},m,a;
int main(int argc, char *argv[]){
gets(s);
for(a=0;s[a]!='\0';a++){
s[a]=tolower(s[a]);
m=s[a]%97;
c[m]++;}
for(a=0;a<26&&c[a];a++);
puts(a==26?"YES":"NO");return 0;
}
