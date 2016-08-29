#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	int num, sum = 0, dou[7][2];
	int flag = 0, i, j;
	memset(dou, 0, sizeof(dou));
	for(i = 0; i < 5; i++){
		scanf("%d", &num);
		for(j = 0; dou[j][0]; j++)
			if(dou[j][0] == num){
				dou[j][1]++;
				if(dou[j][1] == 3)
					flag = 1;
				if(dou[j][1] > 3)
					flag = -1;
				break;
			}
		if(!dou[j][0]){
			dou[j][0] = num;
			dou[j][1] = 1;
		}
	}
	for(j = 0; dou[j][0]; j++)
		printf("%d %d\n",dou[j][0],j);
	if(j == 3 && !flag){
		for(i = 0; dou[i][0]; i++)
			if(flag < dou[i][0] && dou[i][1] == 2)
				flag = dou[i][0];
		for(i = 0; dou[i][0]; i++)
			if(dou[i][0] != flag)
				sum += dou[i][0] * dou[i][1];
	}
	if(j == 2)
		if(flag < 0)
			sum = dou[0][0] + dou[1][0];
		else
			sum = (dou[0][0] * dou[0][1]) < (dou[1][0] * dou[1][1])?(dou[0][0] * dou[0][1]):(dou[1][0] * dou[1][1]);
	if(j == 1)
		sum = dou[0][0] * 2;	
	if(!sum)
		for(i = 0; dou[i][0]; i++)
			if(dou[i][1] == 1)
				sum += dou[i][0];
	printf("%d\n", sum);
	return 0;
}
