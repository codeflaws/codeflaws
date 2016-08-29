#include<stdio.h>
#define N 100
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	char name[N][N];
	int i,j,k;
	for(i=0;i<n;i++){
		scanf("%s",name[i]);
	}
	char before[26][26];
	for(i=0;i<26;i++){
		for(j=0;j<26;j++){
			before[i][j]=-1;
		}
	}
	//before[a][b]=1意思是a在b的前面
	int possible=1;
	//100
	for(i=0;possible && i<n-1;i++){
		//100
		for(j=i+1;possible && j<n;j++){
			//100
			int all_same=1;
			for(k=0;name[i][k]!='\0' && name[j][k]!='\0';k++){
				if(name[i][k]!=name[j][k]){
					all_same=0;
					int ai=name[i][k]-'a';
					int aj=name[j][k]-'a';
					if(before[ai][aj]==0){
						possible=0;
						break;
						//出现了矛盾！
					}else if(before[ai][aj]==-1){
						//printf("%c %c\n",ai+'a',aj+'a');
						before[ai][aj]=1;
						before[aj][ai]=0;
					}else{
						//printf("再次%c %c\n",ai+'a',aj+'a');
					}
					break;
				}
			}
			if(all_same){
				if(name[i][k]!='\0' || name[j][k]!='\0'){
					possible=0;
				}
			}
			//把所有的关系更新一遍！
			int a,b,c;
			//26*26*26=10000已经超时了！
			for(a=0;a<26;a++){
				for(b=0;b<26;b++){
					for(c=0;c<26;c++){
						if(before[a][b]==1 && before[b][c]==1){
							before[a][c]=1;
						}
						if(before[a][b]==0 && before[b][c]==0){
							before[a][c]=0;
						}
					}
				}
			}
		}
	}
	if(possible){
		int count[26];
		int used[26];
		for(i=0;i<26;i++){
			used[i]=0;
		}
		for(i=0;i<26;i++){
			count[i]=0;
			int find=0;
			for(j=0;j<26;j++){
				if(before[j][i]==1){
					used[i]=1;
					used[j]=1;
					find=1;
					count[i]++;
				}
			}
			if(!find)count[i]=26;
		}
		for(i=0;i<26;i++){
			if(used[i] && count[i]==26){
				count[i]=0;
			}
			//printf("%c %d\n",i+'a',count[i]);
		}
		//还是处理得太复杂了！
		int seen[26];
		for(i=0;i<26;i++){
			seen[i]=0;
		}
		for(i=0;i<26;i++){
			int min=27;
			int min_i=0;
			for(j=0;j<26;j++){
				if(!seen[j] && count[j]<min){
					min=count[j];
					min_i=j;
				}
			}
			seen[min_i]=1;
			printf("%c",min_i+'a');
		}
		printf("\n");
	}else{
		printf("Impossible\n");
	}
	return 0;
}
