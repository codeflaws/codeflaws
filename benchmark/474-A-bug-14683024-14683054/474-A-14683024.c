#include<stdio.h>
int main(int argc, char *argv[]){
 char a[100],direction,i;
 scanf("%c\n",&direction);
 gets(a);
for(i=0;a[i]!='\0';i++){
if(direction=='R'&&a[i]=='w') {printf("q");}
if(direction=='R'&&a[i]=='e') {printf("w");}
if(direction=='R'&&a[i]=='r') {printf("e");}
if(direction=='R'&&a[i]=='t') {printf("r");}
if(direction=='R'&&a[i]=='y') {printf("t");}
if(direction=='R'&&a[i]=='u') {printf("y");}
if(direction=='R'&&a[i]=='i') {printf("u");}
if(direction=='R'&&a[i]=='o') {printf("i");}
if(direction=='R'&&a[i]=='p') {printf("o");}
if(direction=='R'&&a[i]=='s') {printf("a");}
if(direction=='R'&&a[i]=='d') {printf("s");}
if(direction=='R'&&a[i]=='f') {printf("d");}
if(direction=='R'&&a[i]=='g') {printf("f");}
if(direction=='R'&&a[i]=='h') {printf("g");}
if(direction=='R'&&a[i]=='j') {printf("h");}
if(direction=='R'&&a[i]=='k') {printf("j");}
if(direction=='R'&&a[i]=='l') {printf("k");}
if(direction=='R'&&a[i]==';') {printf("l");}
if(direction=='R'&&a[i]=='x') {printf("z");}
if(direction=='R'&&a[i]=='c') {printf("x");}
if(direction=='R'&&a[i]=='v') {printf("c");}
if(direction=='R'&&a[i]=='b') {printf("v");}
if(direction=='R'&&a[i]=='n') {printf("b");}
if(direction=='R'&&a[i]=='m') {printf("n");}
if(direction=='R'&&a[i]==',') {printf("m");}
if(direction=='R'&&a[i]=='.') {printf(",");}
if(direction=='R'&&a[i]=='/') {printf(".");}
if(direction=='R'&&a[i]=='w') {printf("/");}
if(direction=='L'&&a[i]=='q') {printf("w");}
if(direction=='L'&&a[i]=='w') {printf("e");}
if(direction=='L'&&a[i]=='e') {printf("r");}
if(direction=='L'&&a[i]=='r') {printf("t");}
if(direction=='L'&&a[i]=='t') {printf("y");}
if(direction=='L'&&a[i]=='y') {printf("u");}
if(direction=='L'&&a[i]=='u') {printf("i");}
if(direction=='L'&&a[i]=='i') {printf("o");}
if(direction=='L'&&a[i]=='o') {printf("p");}
if(direction=='L'&&a[i]=='a') {printf("s");}
if(direction=='L'&&a[i]=='s') {printf("d");}
if(direction=='L'&&a[i]=='d') {printf("f");}
if(direction=='L'&&a[i]=='f') {printf("g");}
if(direction=='L'&&a[i]=='g') {printf("h");}
if(direction=='L'&&a[i]=='h') {printf("j");}
if(direction=='L'&&a[i]=='j') {printf("k");}
if(direction=='L'&&a[i]=='k') {printf("l");}
if(direction=='L'&&a[i]=='l') {printf(";");}
if(direction=='L'&&a[i]=='z') {printf("x");}
if(direction=='L'&&a[i]=='x') {printf("c");}
if(direction=='L'&&a[i]=='c') {printf("v");}
if(direction=='L'&&a[i]=='v') {printf("b");}
if(direction=='L'&&a[i]=='b') {printf("n");}
if(direction=='L'&&a[i]=='n') {printf("m");}
if(direction=='L'&&a[i]=='m') {printf(",");}
if(direction=='L'&&a[i]==',') {printf(".");}
if(direction=='L'&&a[i]=='.') {printf("/");}
}
return 0;}
