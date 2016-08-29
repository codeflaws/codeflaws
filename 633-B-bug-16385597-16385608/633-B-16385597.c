#include <stdio.h>
#include <string.h>
#include<math.h>

int pw(int a, int b){
    int r = 1;
    for(int i = 1; i <= b; ++i)
        r *= i;
    return r;
}

int main(int argc, char *argv[]) {
	// your code goes here
	int m,k,i=1,p,s;
	scanf("%d",&m);
	k=m*5;
	while(k>=m*4)
	{
		s=k/5;
		i=2;
		p=k/pw(5,i);
		while(p>0)
		{s=s+p;
		i++;
		p=k/pw(5,i);}
		if(s==m)
		break;
		k=k-5;
	}
	if(k<m*4)
	printf("0\n");
	else
	printf("5\n%d %d %d %d %d\n",k,k+1,k+2,k+3,k+4);
	return 0;
}