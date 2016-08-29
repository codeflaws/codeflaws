#include<stdio.h>
#define CHOICE 4
#define LENGTH 100+2+1+5
int main(int argc, char *argv[]) {
	int length[CHOICE];
	int great[CHOICE];
	int i,j;
	int count;
	for(i=0;i<CHOICE;i++) {
		count=0;
		while(1) {
			char get=getchar();
			if(get=='\n') break;
			else if(get==EOF) break;
			else {
				count++;
			}
		}
		length[i]=count;
	}
	/*
	   for(i=0;i<CHOICE;i++) {
	   printf("%d\n",length[i]);
	   }
	   */
	for(i=0;i<CHOICE;i++) {
		great[i]=0;
	}
	for(i=0;i<CHOICE;i++) {
		count=0;
		for(j=0;j<CHOICE;j++) {
			if(j!=i) {
				if(length[j]>=2*length[i]) {
					count++;
				} else {
					break;
				}
			}
		}
		if(count==3) {
			great[i]=1;
		}
	}
	/*
	   for(i=0;i<CHOICE;i++) {
	   printf(" %d",great[i]);
	   }
	   printf("\n");
	   */

	for(i=0;i<CHOICE;i++) {
		count=0;
		for(j=0;j<CHOICE;j++) {
			if(j!=i) {
				if(length[i]>=2*length[j]) {
					count++;
				} else {
					break;
				}
			}
		}
		if(count==3) {
			great[i]=1;
		}
	}
	int which=-1;
	count=0;
	for(i=0;i<CHOICE;i++) {
		if(great[i]==1) {
			which=i;
			count++;
		}
	}
	/*
	   for(i=0;i<CHOICE;i++) {
	   printf(" %d",great[i]);
	   }
	   printf("\n");
	   */

	//只能有一个great！
	if(count==1 && which>-1) printf("%c\n",'A'+which);
	else printf("C\n");


	return 0;
}
