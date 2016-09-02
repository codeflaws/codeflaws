#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int x,y,max,ans;

scanf("%d%d",&x,&y);

if(x>y)
    max=x;
else max=y;

ans=6-max+1;

switch(ans){

case 0:
    printf("0/1");
    break;
case 1:
    printf("1/1");
    break;
case 2:
    printf("1/3");
    break;
case 3:
    printf("1/2");
    break;
case 4:
    printf("2/3");
    break;
case 5:
    printf("5/6");
    break;
case 6:
    printf("1/1");
    break;
    }
return 0;
}
