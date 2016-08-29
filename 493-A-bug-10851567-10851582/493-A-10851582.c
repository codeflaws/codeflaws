#include<stdio.h>
#include<string.h>
char tm[2][200],card,team;
int tmp,i,j,min,num,arr[3000][3],n;
int main(int argc, char *argv[]){
	scanf("%s %s %d",tm[0],tm[1],&n);
	for(i=1;i<=n;i++){
		scanf("%d %c %d %c",&min,&team,&num,&card);
		tmp = (team == 'a');
		if(arr[num][tmp]<2)
			if(!arr[num][tmp] && card=='y')
				arr[num][tmp]++;
			else {
				arr[num][tmp]=2;
                                printf("%s %d %d\n",tm[tmp],num,min);
                        }
	}
return 0;
}
