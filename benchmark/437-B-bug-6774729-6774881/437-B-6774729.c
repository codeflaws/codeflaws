#include<stdio.h>

int result[25];
int num ;

void solve(int sum,int limit,int grade,int code)
{
	if(sum == 0||grade==0)
		return ;
	int t = code*grade ;
	if(sum>=grade&&t<=limit)
	{
		result[num] = t ;
		num++ ;
		code += 2 ;
		sum = sum-grade ;
	}
	else
	{
		grade = grade/2 ;
		code = 1 ;	
	}
	solve(sum,limit,grade,code) ;	
	return ;
}

int main(int argc, char *argv[])
{
	int sum,limit ,i;
	int mm,copy,max;
	int x,xnum ;
	while(scanf("%d%d",&sum,&limit)!=EOF)
	{
		num = 0 ;
		mm = 1 ;
		copy = limit ;
		max = 0 ;
		while(copy)
		{
			mm = copy&(-copy) ;
			x = mm ;
			xnum = 0 ;
			while(x>1)
			{
				xnum++ ;
				x = x>>1 ;
			}
			max += mm/2*xnum+mm ;
			copy -= mm ;
		}
		if(sum>max)
		{
				printf("%d\n",-1);
		}
		else
		{
			solve(sum,limit,mm,1);
			printf("%d\n",num);
			for(i=0;i<num-1;i++)
				printf("%d ",result[i]);
			printf("%d\n",result[i]);
		}
	}
	return 0;
}
