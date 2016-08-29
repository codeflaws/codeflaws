#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//10001怎么处理？
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int i;
	int zeros=0;
	int tens=0;
	int total_tens=0;
	int max=1000000;
	char *number=(char *)malloc(max*sizeof(char));
	number[0]='1';
	number[1]='\0';
	getchar();//\n
	int end=0;
	while(!end){
		char a=getchar();
		if(a=='\n' || a==EOF){
			end=1;
			break;
		}
		if(a=='0'){
			zeros=1;
			break;
		}else if(a=='1'){
			char b=getchar();
			//开头是1，要检查是不是10001，1002形式的number
			if(b=='0'){
				//10
				tens=1;
				int is_number=0;
				while(1){
					b=getchar();
					if(b=='0'){
						tens++;
					}else if(b==' '){
						break;
					}else if(b=='\n' || b==EOF){
						end=1;
						break;
					}else{
						is_number=1;
						break;
					}
				}
				if(!is_number){
					total_tens+=tens;
				}else{
					//出现了一个非0数
					//这样以来1000123形式的number出现了！
					number[0]='1';
					i=1;
					while(1){
						if(tens==0)break;
						if(i>max-1){
							printf("tens=%d,1我申请的内存空间不够！\n",tens);
						}
						number[i]='0';
						tens--;
						i++;
					}
					number[i]=b;
					i++;
					number[i]='\0';
					//printf("number=%s\n",number);
					while(1){
						if(i>max-1){
							printf("2我申请的内存空间不够！\n");
						}
						number[i]=getchar();
						if(number[i]==' '){
							number[i]='\0';
							break;
						}
						if(number[i]=='\n' || number[i]==EOF) {
							number[i]='\0';
							end=1;
							break;

						}
						i++;
					}
					//printf("number=%s\n",number);
				}
			}else if(b=='\n' || b==EOF){
				end=1;
				break;
			}else if(b!=' '){
				//11
				number[0]=a;
				number[1]=b;
				i=2;
				while(1){
					if(i>max-1){
						printf("3我申请的内存空间不够！\n");
					}
					number[i]=getchar();
					if(number[i]==' '){
						number[i]='\0';
						break;
					}
					if(number[i]=='\n' || number[i]==EOF) {
						number[i]='\0';
						end=1;
						break;

					}
					i++;
				}
				//printf("number=%s\n",number);
			}
		}else{
			//开头不是1肯定是number
			number[0]=a;
			i=1;
			while(1){
				if(i>max-1){
					printf("4我申请的内存空间不够！\n");
				}
				number[i]=getchar();
				if(number[i]==' '){
					number[i]='\0';
					break;
				}
				if(number[i]=='\n' || number[i]==EOF) {
					end=1;
					number[i]='\0';
					break;
				}
				i++;
			}
			printf("number=%s\n",number);
		}
	}
	if(zeros==1){
		printf("0\n");
	}else{
		printf("%s",number);
		for(i=0;i<total_tens;i++){
			printf("0");
		}
		printf("\n");
	}
	return 0;
}
