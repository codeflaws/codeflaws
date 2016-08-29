// 285B.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <stdio.h>
#include <string.h>

#define MAX_L 30
#define MAX_Q 1005

int q;
char hdl[MAX_Q][MAX_Q][MAX_L],od[MAX_L],nw[MAX_L];
int ch[MAX_Q];

int main(int argc, char *argv[])
{
	int i,j,hi,q;
	while(scanf("%d",&q)!=EOF){
		hi=0;
		for(i=0;i<q;i++){
			scanf("%s %s",&od,&nw);
				
			
			for(j=0;j<hi;j++)
				if(!strcmp(od,hdl[j][ch[j]])){
					ch[j]++;
					strcpy(hdl[j][ch[j]],nw);
					break;
				}	
			
			
			if(j>=hi){
				strcpy(hdl[hi][ch[hi]],od);
				ch[hi]++;
				strcpy(hdl[hi][ch[hi]],nw);
				hi++;
			}
		}
		printf("%d\n",hi);
		for(j=0;j<hi;j++){
			printf("%s %s\n",hdl[j][0],hdl[j][ch[j]]);
		}
	}
	return 0;
}

