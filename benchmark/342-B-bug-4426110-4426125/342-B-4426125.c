#include <stdio.h>

int main(int argc, char *argv[]){
	int i,n,m,s,f;
	int j,t,l,r;
	scanf("%d%d%d%d",&n,&m,&s,&f);
	int now=s;
	int step=1;
	for(i=0;i<m;i++){
		scanf("%d%d%d",&t,&l,&r);
		if(t>step){
			while(t>step){
				if(now==f){
					break;
				}
				if(f-s>0){
					printf("R");
					now+=1;
					step+=1;
				}
				if(f-s<0){
					printf("L");
					now-=1;
					step+=1;
				}
			}
		}
		if(t==step){
			if(now==f){
				break;
			}
			if(now<l || now>r){
				if(f-s>0){
					if(now+1<l || now>r){
						printf("R");
						step+=1;
						now+=1;
					}
					else{
						printf("X");
						step+=1;
					}
				}
				if(f-s<0){
					if(now-1>r || now<l){
						printf("L");
						now-=1;
						step+=1;
					}
					else{
						printf("X");
						step+=1;
					}
				}
			}
			else{
				printf("X");
				step+=1;
			}
		}
	}
	while(now!=f){
		if(f-s>0){
			printf("R");
			now+=1;
		}
		if(f-s<0){
			printf("L");
			now-=1;
		}
	}
	return 0;
}