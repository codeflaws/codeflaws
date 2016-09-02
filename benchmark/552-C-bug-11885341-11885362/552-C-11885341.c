# include <stdio.h>
//# include<conio.h>
# include<math.h>

int main(int argc, char *argv[])
{
    long long int w,m;
    scanf("%I64d%I64d",&w,&m);

    int flag=0;
    long long int arr[200]={0};int i=0;
    while(m!=0)
    {
        arr[i]=m%w;
        m=m/w;
      i++;
    }
    int j;
    for (j = 0;j<=i; j++)
    {
       if (arr[j]!=0&&arr[j]!= 1 && arr[j] !=w-1 && arr[j] != w )
		{
		   flag = 1;
		   printf("gyan  %d  %I64d",j,arr[j]);
		   break;
        }
        else
        {
			if (arr[j] == w-1 || arr[j] == w)
			   arr[j+1]++;
        }

    }


    if(flag==0) printf("YES");
    else printf("NO");

    return 0;
}
