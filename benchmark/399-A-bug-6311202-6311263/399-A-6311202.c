#include<stdio.h>
//#include<conio.h>
int main(int argc, char *argv[]){
int n,p,k,i;
scanf("%d%d%d",&n,&p,&k);
if(p-k<=1){
for(i=1;i<p;i++)
printf("%d",i);
}
else{
printf("<< ");
for(i=p-k;i<p;i++)
printf("%d ",i);
}
printf("(%d) ",p);
if(p+k>=n){
for(i=p+1;i<=n;i++)
printf("%d ",i);
}
else{
for(i=p+1;i<=p+k;i++){
printf("%d ",i);
}
printf(">>");
}
           
//getch();
return 0;
}
