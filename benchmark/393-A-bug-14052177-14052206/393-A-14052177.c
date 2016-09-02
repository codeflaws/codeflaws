#include<stdio.h>
int main(int argc, char *argv[])
{
	char ch;
	int word,n_n=0,n_i=0,n_e=0,n_t=0,min1,min2,min;
	scanf("%c",&ch);
	while(ch!='\n'){
		if(ch=='n')n_n++;
		else if(ch=='i')n_i++;
		else if(ch=='e')n_e++;
		else if(ch=='t')n_t++;
		scanf("%c",&ch);
	}
	if((n_n<3)&(n_i<1)&(n_e<3)&(n_t<1))printf("0");
	else {
		word=1;
		n_n-=3;
		n_i--;
		n_t--;
		n_e-=3;
		n_n/=2;
		n_e/=3;
		min1=(n_n>n_e)?n_e:n_n;
		min2=(n_t<n_i)?n_t:n_i;
		min=(min1<min2)?min1:min2;
		printf("%d",word+min);
	}
	return 0;
}
