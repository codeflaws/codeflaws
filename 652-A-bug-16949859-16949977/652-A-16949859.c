#include<stdio.h>
int main(int argc, char *argv[]){
int a,b,c,d;
scanf("%d%d",&a,&b);
int up,down;
scanf("%d%d",&up,&down);
int minus=((8*up+a)-(12*down))+4*up;
if(minus<=a && ((8*up)+a)<b){
printf("-1");
return 0;
}
int i;
for(i=0;i<8;i++){
a=a+up;
if(a>b){
printf("%d",0);
return 0;
}}
int cnt=0; int ind=0;
while(1){
if(!ind){
for(i=0;i<12;i++){
a=a-down;
if(a>=b){
printf("%d",cnt);
return 0;
}
}
ind=1;
cnt++;
}
else{
for(i=0;i<12;i++){
a=a+up;
if(a>=b){
printf("%d",cnt);
return 0;
}
}
ind=0;
}
}
}
