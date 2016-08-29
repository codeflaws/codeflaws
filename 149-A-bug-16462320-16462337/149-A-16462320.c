#include<stdio.h>
int a[124],myst,k=0,s,ctrl,i,j;
int main(int argc, char *argv[]){
	scanf("%d",&myst);
	if(!myst){printf("0");return 0;}
	for(i=0;i<12;i++){
		scanf("%d",a+i);
		j=i;
		while(j){
			if(a[j-1]<a[j])
			{
				ctrl=a[j-1]; a[j-1]=a[j]; a[j]=ctrl;
				j--;
			}
			else break;
		}
	}
	for(i=0;i<12;i++){
		k+=a[i];
		s++;
		if(k>=myst){printf("%d",s);return 0;}
	}
}
