#include <stdio.h>
int main(int argc, char *argv[])
{

const int table[]={2.7,2,3,3,4,2,5,1,2};
int floor=0;
scanf("%d", &floor);
printf("%d\n", table[floor/10]*table[floor%10]);
return 0;
}

