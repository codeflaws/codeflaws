#include<stdio.h>

char won(char *ptr);
short int illegal(char *ptr,int x,int o);

int main(int argc, char *argv[])
{
	char ch={0};
	char arr[10]={0};
	short int i=0;
	short int o=0;
	short int x=0;
	short int p=0;
	
	for(i=0;i<9;i++)
	{
		scanf("%c",&arr[i]);
		if(i==2||i==5||i==8)
			ch=getchar();
		if(arr[i]=='X')
			x++;
		else if(arr[i]=='0')
			o++;
		else
			p++;
	}
	arr[9]='\0';
	
	if(x>5||o>4||o>x||(x-o)>1||illegal(arr,x,o))
	{
		printf("illegal");
	}
	
	else
	{
		ch=won(arr);
		if(ch)
		{
			if(ch=='X')
				printf("the first player won");
			else
				printf("the second player won");
		}
		else
		{
			if((o+x)==9)
				printf("draw");
			else if(x-o)
				printf("second");
			else
				printf("first");
		}
	}

	return 0;
}

char won(char *ptr)
{
	if(*(ptr+0)!='.'&&*(ptr+0)==*(ptr+4)&&*(ptr+4)==*(ptr+8))
		return *(ptr+0);
	if(*(ptr+2)!='.'&&*(ptr+2)==*(ptr+4)&&*(ptr+4)==*(ptr+6))
		return *(ptr+2);
	if(*(ptr+0)!='.'&&*(ptr+0)==*(ptr+1)&&*(ptr+1)==*(ptr+2))
		return *(ptr+0);
	if(*(ptr+3)!='.'&&*(ptr+3)==*(ptr+4)&&*(ptr+4)==*(ptr+5))
		return *(ptr+3);
	if(*(ptr+6)!='.'&&*(ptr+6)==*(ptr+7)&&*(ptr+7)==*(ptr+8))
		return *(ptr+6);
	if(*(ptr+0)!='.'&&*(ptr+0)==*(ptr+3)&&*(ptr+3)==*(ptr+6))
		return *(ptr+0);
	if(*(ptr+1)!='.'&&*(ptr+1)==*(ptr+4)&&*(ptr+4)==*(ptr+7))
		return *(ptr+1);
	if(*(ptr+2)!='.'&&*(ptr+2)==*(ptr+5)&&*(ptr+5)==*(ptr+8))
		return *(ptr+2);
	else
		return '\0';
}

short int illegal(char *ptr,int x,int o)
{
	short int n1=0;
	short int n2=0;

	if(*(ptr+0)!='.'&&*(ptr+0)==*(ptr+1)&&*(ptr+1)==*(ptr+2))
	{
		if(*ptr=='X')
			n1++;
		else
			n2++;
	}
	if(*(ptr+3)!='.'&&*(ptr+3)==*(ptr+4)&&*(ptr+4)==*(ptr+5))
	{
		if(*(ptr+3)=='X')
			n1++;
		else
			n2++;
	}
	if(*(ptr+6)!='.'&&*(ptr+6)==*(ptr+7)&&*(ptr+7)==*(ptr+8))
	{
		if(*(ptr+6)=='X')
			n1++;
		else
			n2++;
	}
	if(n1 && n2)
	{
		return 1;
	}
	else
	{
		if(n1)
		{
			if(o>x-1)
				return 1;
		}
		if(n2)
		{
			if(x>o)
				return 1;
		}
	}
	

	n1=0;
	n2=0;
	if(*(ptr+0)!='.'&&*(ptr+0)==*(ptr+3)&&*(ptr+3)==*(ptr+6))
	{
		if(*ptr=='X')
			n1++;
		else
			n2++;
	}
	if(*(ptr+1)!='.'&&*(ptr+1)==*(ptr+4)&&*(ptr+4)==*(ptr+7))
	{
		if(*(ptr+1)=='X')
			n1++;
		else
			n2++;
	}
	if(*(ptr+2)!='.'&&*(ptr+2)==*(ptr+5)&&*(ptr+5)==*(ptr+8))
	{
		if(*(ptr+2)=='X')
			n1++;
		else
			n2++;
	}
	
	if(n1 && n2)
	{
		return 1;
	}
	else
	{
		if(n1)
		{
			puts("V");
			if(o>x-1)
				return 1;
		}
		if(n2)
		{
			printf("x: %d  o: %d\n");
			if(x>o)
				return 1;
		}
	}
	
	
	n1=0;
	n2=0;
	if(*(ptr+0)!='.'&&*(ptr+0)==*(ptr+4)&&*(ptr+4)==*(ptr+8))
	{
		if(*(ptr+0)=='X')
			n1++;
		else
			n2++;
	}
	if(n1)
	{
		if(o>x-1)
			return 1;
	}
	if(n2)
	{
		if(x>o)
			return 1;
	}
	
	
	n1=0;
	n2=0;
	if(*(ptr+2)!='.'&&*(ptr+2)==*(ptr+4)&&*(ptr+4)==*(ptr+6))
	{
		if(*(ptr+2)=='X')
			n1++;
		else
			n2++;
	}
	if(n1)
	{
		if(o>x-1)
			return 1;
	}
	if(n2)
	{
		if(x>o)
			return 1;
	}

	return 0;
}
