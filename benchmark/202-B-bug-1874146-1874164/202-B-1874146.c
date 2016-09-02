#include<stdio.h>
#include <string.h>
char lesha[4][11];
char ivan[10][20][11];
int ivannum[10];
int desword, archpro;
int inversion=100;
int order[4]={0, 1, 2, 3};
int resultindex = 0;
int issubsequence(){
	int i, j, k;
	for(i=0;i<archpro;++i){
		for(j=0, k=0;j<ivannum[i];++j){
			if(strcmp(lesha[order[k]], ivan[i][j])==0){
				++k;
				if(k==desword)
					return i+1;
			}
		}
	}
	return 0;
}

int getinversion(){
	int i, j, count;
	for(i=0, count=0;i<desword;++i){
		for (j=i+1;j<desword;++j)
			if(order[i]>order[j])
				++count;
	}
	return count;
}
void permutation(int level){
	int i, tmp;
	if(level == desword-1){
		int proindex = issubsequence();
		if(proindex){
			tmp = getinversion();
			if(tmp < inversion){
				inversion = tmp;
				resultindex = proindex;
			}
		}
	}
	for(i=level;i<desword;++i){
		tmp = order[level];
		order[level] = order[i];
		order[i] = tmp;
		permutation(level+1);
		order[i] = order[level];
		order[level] = tmp;
	}
}

int main(int argc, char *argv[]){
	//freopen("in.txt", "r", stdin);
	int i, j, similarity;
	scanf("%d", &desword);
	for (i=0;i<desword;++i)
		scanf("%s", lesha[i]);
	scanf("%d", &archpro);
	for(i=0;i<archpro;++i){
		scanf("%d", &ivannum[i]);
		for (j=0;j<ivannum[i];++j)
			scanf("%s", ivan[i][j]);
	}
	permutation(0);
	if(resultindex>0){
		similarity = desword * (desword-1) / 2 - inversion + 1;
		printf("%d\n[:", resultindex);
		for(i=0;i<similarity;++i)
			printf("|");
		printf(":]\n");
	}else{
		printf("Brand new problem!\n");
	}
	return 0;
}