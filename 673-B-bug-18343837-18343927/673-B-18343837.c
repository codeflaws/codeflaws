#include <stdio.h>
#include <stdint.h>
#define ll long long int
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int main(int argc, char *argv[])
{
    int n=0, m=0;
    scanf("%d %d", &n, &m);
    int  a=0, b=n;
    while(m--){
	int x, y;
	scanf("%d %d", &x, &y);
	if(x > y){
	    int tmp = x;
	    x = y;
	    y = tmp;
	}
	a = MAX(x, a);
	b = MIN(y, b);
    }
    printf("%d\n",MAX(0, b-a));

    

    return 0;
}

