#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
    int a1,a2;
    scanf("%d %d",&a1,&a2);
    if((abs(a2-a1)%3==2)||(abs(a2-a1)%3==1))printf("%d\n",a1+a2-2);
    else printf("%d\n",a1+a2-3);
	// your code goes here
	return 0;
}

