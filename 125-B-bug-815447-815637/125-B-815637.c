#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//char tt[1000][1000];
  char temp[1000];
  int i,j, count = 0, t,fl=0;
  scanf("%s",temp);
	for(i=0;i<strlen(temp);i++){
		if(temp[i]=='>'){
			printf(">\n");
			for(j=0;j<count*2-2;j++){
				printf(" ");
			}
			fl = 1;	
		}
		if(temp[i]=='<'){
			if(temp[i+1]=='/'){
				count--;
				fl = 0;
			}else{
				if(fl==1&&count!=0){
					printf("  ");
				}
				count++;	
			}
			while(temp[i]!='>'){
				printf("%c",temp[i]);
				i++;
			}
			i--;
		}
	}
  //system("PAUSE");	
  return 0;
}
