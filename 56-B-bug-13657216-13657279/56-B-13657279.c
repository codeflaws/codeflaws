#include<stdio.h>
int main(int argc, char *argv[])
{
	int l_in=0,f_in=0,n,i,j,ni[1007];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",ni+i);
		if((*(ni+i)!=i)&&(!f_in)){
			f_in=i;
		}
	}
	if(!f_in)printf("0 0\n");
	else{
		for(i=n;i>f_in;i--){
			if(*(ni+i)!=i){
				l_in=i;
				break;
			}
		}
		j=1;
	for(i=f_in;i<l_in;i++){
		if((*(ni+i)-*(ni+i+1))!=1){
			j=0;
			break;
		}
	}
	if(j)printf("%d %d\n",f_in,l_in);
	else printf("0 0\n");	
	}
	return 0;
}
