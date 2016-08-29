#include <stdio.h>
int main(int argc, char *argv[])
{
	char buffer[500000],result[500000],tmp;
	int count,A,N,pos=0,B,R,K,L;
	scanf("%d",&N);
	//buffer[0]='<';
	//buffer[1]='3';
	for(count=-1;count < N;count++){
		while((tmp=getchar())!='\n'){
			buffer[pos]=tmp;
			pos++;
		}
		buffer[pos]='<';
		buffer[pos+1]='3';
		pos+=2;
	}
	buffer[pos]=0;
	B=pos;
	pos=0;
	while((tmp=getchar())!='\n'&&tmp!=EOF){
			result[pos]=tmp;
			pos++;
	}
	R=pos;
	result[pos]=0;
	/*putchar('\n');
	puts("#################\n");
	puts(buffer);
	putchar('\n');
	puts(result);
	puts("#################\n");*/
	K=0;
	L=0;
	while(K<B){
		while(L<R && buffer[K]!=result[L])
			L++;
		if(buffer[K]!=result[L]){
			printf("no");
			return 0;
		}
		K++;
		L++;
	}
	printf("yes");
	return 0;
}
