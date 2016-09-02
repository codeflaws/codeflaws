#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    long long int applecount=0, b[43],i=0,j,n,p,length,hp=0,cost,tk;

    char a[10];
    scanf("%lld %lld ",&n, &p);
    i=n-1;
    for(j=0;j<n;j++){
            gets(a);
     length = strlen(a);


     if(length==4){
            b[i] = 1;
				i--;



     }
     else
    {
        b[i] = 0;
				i--;
				hp++;
    }

    }
    for (i = 0; i < n; i++)
	{
		if (b[i] == 0)
		{
			applecount = (applecount + 0.5) * 2;
		}
		else
		{
			applecount = applecount * 2;
		}
	}

    cost = applecount*p;
    tk=cost-(hp*p/2);
    printf("%lld\n",tk);

    return 0;
}
