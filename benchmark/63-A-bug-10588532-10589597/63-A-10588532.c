#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{char f[100][20],a[]="rat",b[]="woman",c[]="child",d[]=" man",e[]="captain";
int x,i=0,j=0,h=0,k;

scanf("%d\n",&x);
for (i=0;i<x;i++){
gets(f[i]);}


for (k=0;k<=x;k++){

for (i=0 ;i<x;i++)
{
if (strstr(f[i],a) != 0 ) {
for (j=0;f[i][j]!=' ';j++){
printf("%c",f[i][j]);
f[i][j]='0';}
f[i][j+3]='0';
h++;
}if (h>0){
printf("\n") ;
k++;
h=0;

}}

for (i=0;i<x;i++)
{if (strstr(f[i],b)!=0 || strstr(f[i],c)!=0 ) {
for (j=0;f[i][j]!=' ';j++){
printf("%c",f[i][j]);
f[i][j]='1';}
f[i][j+3]='1';
h++;
}
if (h>0){
printf("\n");
k++;

h=0;

}
}

for (i=0;i<x;i++)
{if (strstr(f[i],d)!=0) {
for (j=0;f[i][j]!=' ';j++){
printf("%c",f[i][j]);
f[i][j]='2';}
h++;
f[i][j+3]='2';
}
if (h>0){
printf("\n");
k++;
h=0;


}}

for (i=0  ;i<x;i++)
{if (strstr(f[i],e)!=0) {
for (j=0;f[i][j]!=' ';j++){
printf("%c",f[i][j]);
f[i][j]='3';}
h++;
f[i][j+3]='3';
}
if (h>0){
printf("\n");
h=0;

k++;
break;
}}

}

    return 0;
}
