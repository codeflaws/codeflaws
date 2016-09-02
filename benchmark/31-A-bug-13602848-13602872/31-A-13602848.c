#include<stdio.h>
int main(int argc, char *argv[])
{
	int k=1,f=0,found[3]={0},n,a[107],i,j,swap,index[107];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	scanf("%d",a+i);
	*(index+i)=i;
	}
	for(i=1;i<=n;i++){
		for(j=n;j>i;j--){
			if(*(a+j)<*(a+i)){
				*(index+i)=(*(index+i))^(*(index+j));
				*(index+j)=(*(index+i))^(*(index+j));
				*(index+i)=(*(index+j))^(*(index+i));
				swap=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=swap;
			}
		}
	}
	for(i=n;(i>1)&&!f;i--){
		for(j=1;(j<i)&&!f;j++){
			swap=*(a+i)-*(a+j);
			for(k=1;k<i;k++){
				if(swap==*(a+k)){
					f=1;
					*(found+0)=*(index+i);
					*(found+1)=*(index+k);
					*(found+2)=*(index+j);
				}
			}
		}
	}
	if(f)printf("%d %d %d",*(found),*(found+1),*(found+2));
	else printf("-1");
	return 0;
}
