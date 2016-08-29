#include<stdio.h>
int x,y,n,m,sum = 0;
void find(){
	if(x%2 == 1){
		if(y < m)
			y++;
		else
			x++;
	}
	else{
		if(y > 1)
			y--;
		else
			x++;
	}
	printf("%d %d ",x,y);
	sum++;
	return ;
}
void cover(){
	if(sum == n*m)
		return ;
	if(x%2 == 1){
		if(y < m)
			y++;
		else
			x++;
	}
	else{
		if(y > 1)
			y--;
		else
			x++;
	}
	sum++;
	printf("%d %d ",x,y);
	cover();
	return ;
}
int main(int argc, char *argv[]){
	int i,j,k,l;
	scanf("%d%d%d",&n,&m,&k);
	i = 0;
	x = 1;
	y = 0;
	while(i < k-1){
		printf("2 ");
		find();
		find();
		i++;
		printf("\n");
	}
	printf("%d ",n*m - 2*(i));
	cover();
	printf("\n");
	return 0;
}
