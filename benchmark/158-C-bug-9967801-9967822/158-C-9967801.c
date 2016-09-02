#include<stdio.h>

int main(int argc, char *argv[])
{
	int pointer=1;

	
	int n,i;
	scanf("%d",&n); 
	getchar();
	char a[2000][2005];
	a[0][0]=47;
	a[0][1]='\0';

	for(i=0;i<n;i++)
	{
		char c;
		c=getchar();

		if(c=='c')
		{
			getchar();
			getchar();

			int temp=0,flag=0;
			char d;

			
			d=getchar();
			if(d==47) d=getchar();

			while(d!='\n' && d!=EOF)
			{
				if(d==47 && flag!=2)
				{
					a[pointer][temp]=47;
					a[pointer][temp+1]='\0';
					pointer++;
					temp=0;
					flag=1;
				}
				else if(d=='.')
				{
					getchar();

					if(pointer>1)
					{	pointer--;
						temp=0;
						a[pointer][temp]='\0';
					}
					flag=2;
				}
				else if(d!=47)
				{
					a[pointer][temp]=d;
					temp++;
					flag=3;
				}
				d=getchar();
			}
			if(flag==3)
			{	
			a[pointer][temp]=47;
			a[pointer][temp+1]='\0';
			pointer++;
			temp=0;
			}
		}
		else if(c=='p')
		{
			getchar();
			getchar();
			getchar();

			int j;
			if(pointer==0) printf("/");
			for(j=0;j<pointer;j++)
			{
				int p=0;
				while(a[j][p]!='\0')
				{
					printf("%c",a[j][p]);
					p++;
				}
			}

			printf("\n");
		}	


	}
	return 0;
}