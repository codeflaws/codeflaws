#include <stdio.h>
int main(int argc, char *argv[]){
	int k;
	scanf("%d",&k);
	int index[100];
	int indexCount=1;
	char s[101];
	int indexoutput[100];
	indexoutput[0]=0;
	index[0]=0;
	int letters[27];
	scanf("%s",s);
	int i=0;
	for(i=0;i<27;i++){
		letters[i]=0;
	}
	for(i=0;s[i+1]!='\0';i++){
		if(s[i]==s[i+1]){
			//count++;
			continue;
		}
		else{
			index[indexCount]=i+1;
			//count=1;
			indexCount++;
		}
	}

	index[indexCount]=i+1;
	// for(i=0;i<20;i++){
	// 	printf("%d",index[i]);
	// }
	int outindex=0;
	for(i=0	;i<indexCount;i++){
		if(letters[s[index[i]]-'a']==0){
			letters[s[index[i]]-'a']++;
			indexoutput[outindex]=index[i];
			outindex++;
		}
	}
	 indexoutput[outindex]=index[indexCount];
	// 	for(i=0;i<outindex+1;i++){
	// 	printf("%d ",indexoutput[i]);
	// }
	if(k>outindex){
		printf("NO\n");
	}
	else{
		printf("YES\n");
		k--;
		for(i=0;i<k;i++){
			int j=0;
			for(j=indexoutput[i];j<indexoutput[i+1];j++){
				printf("%c",s[j]);	
			}
			printf("\n");
		}
		int j=0;
		for(j=indexoutput[k];s[j]!='\0';j++){
			printf("%c",s[j]);
		}
		
	}
	return 0;
}