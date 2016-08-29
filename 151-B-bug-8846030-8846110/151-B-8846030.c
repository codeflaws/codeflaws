// 24/11/14 21:57

// Program to solve the problem Phone Numbers on CODEFORCES

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 101

int allSame(char*);
int decOrder(char*);

int main(int argc, char *argv[]){
	int n,i=0,j=0,k=0,l=0,index=0,girl=0,pizza=0,taxi=0;
	int times; // variable to keep the track of number of records
	char nums[MAX][10],*names[MAX];
	char *name,*token,*ptr=NULL,count[3];
	int gpt[MAX][3]={-1}; // an array to store the number of girls pizzas and taxi numbers for all the given friends
	scanf("%d",&n);
	for(i=0;i<n;++i){
		name = (char*)malloc(25*sizeof(char));
		scanf(" %[^\n]s",name);
		//printf("%s",name);
		ptr = name;
		while(*ptr != ' '){
			ptr++;
		}
		ptr++;
		//printf("%s\n",ptr);
		names[i] = ptr;
		token = strtok(name," ");
		times = atoi(token);
		if(times>0){
			for(j=0;j<times;++j){
				scanf(" %[^\t\n]s",nums[j]);
			}
			for(j=0;j<times;++j){
				if(allSame(nums[j])){
					taxi++;
				}
				else if(decOrder(nums[j])){
					pizza++;
				}
				else{
					girl++;
				}
			}
			gpt[i][0] = girl;
			gpt[i][1] = pizza;
			gpt[i][2] = taxi;
			girl = pizza = taxi = 0;
		}
	}
	/*printf("\n");
	for(i=0;i<n;++i){
		printf("%s\n%d %d %d\n",names[i],gpt[i][0],gpt[i][1],gpt[i][2]);
	}*/
	// Now finding the maximum of the three that is girls pizzas and taxi
	int max = 0,flag=1;
	for(i=0;i<n;++i){
		if(gpt[i][2]>max){
			max = gpt[i][2];
		}
	}
	printf("If you want to call a taxi, you should call:");
	for(i=0;i<n;++i){
		if(gpt[i][2] == max){
			if(flag){
				printf(" %s",names[i]);
				flag = 0;
			}
			else{
				printf(", %s",names[i]);
			}
		}
	}
	printf(".");
	max = 0,flag=1;
	for(i=0;i<n;++i){
		if(gpt[i][1]>max){
			max = gpt[i][1];
		}
	}
	printf("\nIf you want to order a pizza, you should call:");
	for(i=0;i<n;++i){
		if(gpt[i][1] == max){
			if(flag){
				printf(" %s",names[i]);	
				flag = 0;
			}
			else{
				printf(", %s",names[i]);
			}
		}
	}
	printf(".");
	max = 0,flag = 1;
	for(i=0;i<n;++i){
		if(gpt[i][0]>max){
			max = gpt[i][0];
		}
	}
	printf("\nIf you want to go to a cafe with a wonderful girl, you should call:");
	for(i=0;i<n;++i){
		if(gpt[i][0] == max){
			if(flag){
				printf(" %s",names[i]);
				flag = 0;
			}
			else{
				printf(", %s",names[i]);	
			}
		}
	}
	printf(".");
	return 0;
}

int allSame(char* str){
	int i,same=1,len;
	len = strlen(str);
	char temp = str[0];
	for(i=1;i<len;++i){
		if(str[i] == '-'){
		}
		else if(str[i]!=temp){
			same = 0; // if all are not same then return 0
			break;
		}
	}
	return same;
}

int decOrder(char* str){
	int i,len,dec=1;
	char last;
	len = strlen(str);
	last = str[0];
	for(i=1;i<len;++i){
		if(str[i] == '-'){
		}
		else if(str[i]<last){
		}
		else{
			dec = 0;
			break;
		}
		if(str[i]!='-')
			last = str[i];
	}
	return dec;
}
