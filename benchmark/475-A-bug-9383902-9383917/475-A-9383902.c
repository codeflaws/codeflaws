#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int i,j,k,n,count=0;
	char s1[1000000],s2[1000000],s3[1000000],s4[1000000],s5[1000000],s6[1000000];
	scanf("%lld", &n);
	s1[0]='+';
	s6[0]=s6[25]='+';
	s2[0]=s3[0]=s4[0]=s5[0]=s2[23]=s3[23]=s4[23]=s5[23]=s2[25]=s3[25]=s4[25]=s5[25]='|';
	for(i=1;i<25;i++)
	{
		s1[i]=s6[i]='-';
		s4[i]='.';
		if(i%2==0)
		{
			s2[i]=s3[i]=s5[i]='.';
		}
		else if(i!=23 && i!=25)
		{
			s2[i]=s3[i]=s5[i]='#';
		}
	}
	s1[25]='+';
	s2[24]='D';
	s2[26]=s5[26]=')';
	for(i=1;i<25,n!=0;i=i+2)
	{
		if(n>=3 && i==1)
		{
			s4[1]='O';
			count++;
		}
		s2[i]='O';
		count++;
		if(count==n)
			break;
		s3[i]='O';
		count++;
		if(count==n)
			break;
		s5[i]='O';
		count++;
		if(count==n)
			break;
	}
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);
	printf("%s\n", s5);
	printf("%s\n", s6);
	return 0;
}
