#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]) {
int i,j,a,k,l,t=1;
scanf("%d",&a);
if(a==2)
	a=1;
if(a==3){
	printf("2\n1 3");
return 0;
}
if(a==4){
	printf("2\n3 1 4 2");
return 0;
}
printf("%d\n",a);
for(i=1;i<=a;i+=2)
printf("%d ",i);
for(i=2;i<=a;i+=2)
printf("%d ",i);
}

