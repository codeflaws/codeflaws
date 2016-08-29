#include <stdio.h>

int gcd( int a, int b);

int main(int argc, char *argv[])
{
	int x,y,a,b,gcdv, lcm, i, count, temp;
	
	scanf("%d %d %d %d",&x,&y,&a,&b);
	
	if( x == 1) lcm = y;
	else if( y == 1) lcm = x;
	else{
	gcdv = gcd(x, y);
	lcm = x * y / gcdv;
	}
    
    count = 0;
    /*while(temp <= b){
        if( temp >= a) count++;
        temp = lcm * (++i);
    }*/
    count = b / lcm - a / lcm ;
    //if(b%lcm == 0) count++;
    if(a%lcm == 0) count++;
    
    
    printf("%d",count);
	return 0;
}

int gcd( int a, int b){
    int large, small, temp;
    
    large = small = a;
    if(a >= b) small = b;
    else large = b;
    
    do{
        large = large - small;
        if( large < small){
            temp = large;
            large = small;
            small = temp;
        }
        
    }while(large != small);
    return large;
}