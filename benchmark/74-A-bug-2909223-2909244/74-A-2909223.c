#include<stdio.h>
int main(int argc, char *argv[])
{
char ch[51][21];
	int su,nu,a,b,c,d,e,val,max=0,n,i,ans;
    scanf("%d",&n);
    for(i=0;i<n ;i++)
    {
	scanf("%s%d%d%d%d%d%d%d",ch[i],&su,&nu,&a,&b,&c,&d,&e);
	ans=su*100-nu*50+a+b+c+d+e;
	if(ans>max)
	    max=ans,val=i;
    }
    printf("%s",ch[val]);
    return 0;
}

