#include<stdio.h>
int main(int argc, char *argv[]){
	int m,t,r,w,count,sum=0,i;
	int candle[1000] ={0};

	scanf("%d%d%d",&m,&t,&r);
	if( t+1 < r)
		sum = -1;
	while( m-- ){
		scanf("%d",&w);
		if( t+1 > r ){
			count =0;
			for( i = w-t; i<w && count < r;i++ ){
				if( candle[i+t] == 1 )
					count++;
			}
			if( count < r ){
				count = r-count;
				sum += count;
				i=1;
				while( count ){
					if( candle[ w - i+ t] == 0 )
					{
						candle[w-i + t] = 1;
						count--;
					}
					i++;
				}
			}
		}
	}
	printf("%d\n",sum);
	return 0;
}
