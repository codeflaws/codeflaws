

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, const char * argv[]) 
{
	int n,m;
	int i,j;
	char (*l1)[11],(*l2)[11];
	char (*r)[11];
	char lec[11];
	scanf("%d",&n);
	scanf("%d",&m);
	l1 = malloc(sizeof(char)*11*m);
	l2 = malloc(sizeof(char)*11*m);
	r = malloc(sizeof(char)*11*m);
	// lec = malloc(sizeof(char)*11*n);
	for(i = 0; i < m; i++){
		scanf("%s %s",l1[i],l2[i]);
		if(strlen(l1[i]) <= strlen(l2[i]))
			strcpy(r[i],l1[i]);
		else
			strcpy(r[i],l2[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%s",lec);
		//find index
		for(j = 0; j < n; j++)
			if(!strcmp(lec,l1[j]))
				break;
		printf((i!=n-1) ? "%s " : "%s\n",r[j]);
	}
return 0;
}
