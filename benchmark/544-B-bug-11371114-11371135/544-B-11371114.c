#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,k;
	scanf("%d%d",&n,&k);
	
	if(k>((n*n+1)/2)) {
		printf("NO\n");
		return 0;
	}
	else printf("YES\n");
	char stripe[n+1],stripo[n+1];
	int i=0;
	
	for( i=0 ; i<n ; i++){
		if( i%2==0 ) {
			stripe[ i]='L';
			stripo[ i]='S';
		}
		else {
			stripe[ i]='S';
			stripo[ i]='L';
		} 
	}
	stripe[n]='\0';
	stripo[n]='\0';

	int start=0;
	if(k==((n*n)/2)){
		for( i=0 ; i<n ; i++){
			if(i%2==0)printf("%s\n",stripe);
			else printf("%s\n",stripo );
		}
		return 0;
	}

	int top=( k)/( n);
	for( i=0 ; i<top ; i++){	
			printf("%s\n",stripe);
			printf("%s\n",stripo );
			//start++;
	}
	int middle;
	if((k-top*n)>=((n+1)/2)) {
		printf("%s\n",stripe );
		middle=k-top*n-(n+1)/2;
		top=2*top+1;
	}
	else {
		middle=k-top*n;
		top=2*top;
	}

	if(middle<=0) return 0;
	middle=2*middle;
	if(top%2==0){
		for(i=0;i<middle;i++){
			printf("%c",stripe[i]);
		}
	}
	else{
		for(i=0;i<middle;i++){
			printf("%c",stripo[i]);
		}
	}

	
	for(i=0;i<n-middle;i++) printf("S");
	printf("\n");
	

	int bottom=n-top-1;
	for(i=0;i<bottom;i++){
		int j;
		for(j=0;j<n;j++) printf("S");
		printf("\n");
	}
	return 0;
}