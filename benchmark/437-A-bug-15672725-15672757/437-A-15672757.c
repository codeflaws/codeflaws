#include<stdio.h>
#include<string.h>
int  main(int argc, char *argv[])
{
	char str1[110],str2[110],str3[110],str4[110];
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);
	scanf("%s",str4);
	int len1,len2,len3,len4,A[4]={0},i,count=0;
	len1=strlen(str1);
	len2=strlen(str2);
	len3=strlen(str3);
	len4=strlen(str4);
	len1=len1-2;
	len2=len2-2;
	len3=len3-2;
	len4=len4-2;
	if(((len1<=(len2/2))&&(len1<=(len3/2))&&(len1<=(len4/2)))||((len1>=(len2*2))&&(len1>=(len3*2))&&(len1>=len4*2)))
	{
		A[0]=1;
	}
	if(((len2<=(len1/2))&&(len2<=(len3/2))&&(len2<=(len4/2)))||((len2>=(len1*2))&&(len2>=(len3*2))&&(len2>=len4*2)))
	{
		A[1]=1;
	}
	if(((len3<=(len2/2))&&(len3<=(len1/2))&&(len3<=(len4/2)))||((len3>=(len2*2))&&(len3>=(len1*2))&&(len3>=len4*2)))
	{
		A[2]=1;
	}
	if(((len4<=(len2/2))&&(len4<=(len3/2))&&(len4<=(len1/2)))||((len4>=(len2*2))&&(len4>=(len3*2))&&(len4>=len1*2)))
	{
		A[3]=1;
	}
	for(i=0;i<4;i++)
	{
		if(A[i]==1)
		count++;
	}
	if((count==0)||(count>1))
	printf("C");
	else if(count==1)
	{
		for(i=0;i<4;i++)
		{
			if(A[i]==1)
			{
				printf("%c",i+65);
				return 0;
			}
		}
	}
	return 0;
}