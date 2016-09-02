#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
	long long int k,l,i=1,res=1;

	scanf("%I64d%I64d",&k,&l);



	while(1)
	{
		res=res*k;
		i++;

		if(l%res!=0)
		{
			printf("NO");
			goto label;
		}

		if(l%res==0&&l/res==1)
		break;

	}

	printf("YES\n");
	printf("%I64d",i-2);

	label:

	return 0;
}
