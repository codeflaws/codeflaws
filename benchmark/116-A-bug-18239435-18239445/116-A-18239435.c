#include "stdio.h"

int main(int argc, char *argv[]){
	
	int entryCount=0,exitCount=0,stationCount,iter,minCapacity=0,passCount=0;
	
	scanf("%d",&stationCount);
	
	for(iter=0;iter<stationCount;iter++){
		scanf("%d%d",&exitCount,&entryCount);
		passCount = passCount + (entryCount - exitCount);
		if(minCapacity < passCount)
		{
			minCapacity = passCount;
		}
		printf("--%d--%d--%d\n",minCapacity,entryCount,exitCount);
	}
	printf("%d",minCapacity);
	return 0;
}