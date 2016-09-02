#include<stdio.h>
int main(int argc, char *argv[])
{
	int x,y,i,top=0,a,f=0;
	scanf("%d %d",&x,&y);
	int kln=y;
	for(i=0;i<x;i++)
	{
		scanf("%d",&a);
		f=0;
		if(kln-a>=0){
			kln-=a;
			if(!kln){
				kln=y;
				top++;
			}
		}
		else{
			top++;
			kln=y-a;
			f=1;
		}
	}
	if(!f)
		printf("%d",(!top)?1:top);
	else
		printf("%d",top+1);
return 0;
}
