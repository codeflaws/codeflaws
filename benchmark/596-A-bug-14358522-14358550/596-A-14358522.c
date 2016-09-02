/*A*/
#include<stdio.h>
#include<math.h>
struct data{
	int x,y;
};
int main(int argc, char *argv[])
{
    int n;
    struct data s[10];
    int i,j;
    int flag;
    int ans;
    while(scanf("%d",&n)!=EOF)
    {
    	for(i=1;i<=n;i++)
    		scanf("%d%d",&s[i].x,&s[i].y);
    	flag=0;
    	for(i=1;i<=n;i++)
    	{
    		for(j=i+1;j<=n;j++)
    		{
    			if(s[i].x==s[j].x||s[i].y==s[j].y)
    				continue;
    			flag=1;
    			ans=(s[i].x-s[j].x)*(s[i].y-s[j].y);
			}
		}
		if(flag==1)
		    printf("%d\n",ans);
		else
		    printf("-1\n");
	}
	return 0;
}
