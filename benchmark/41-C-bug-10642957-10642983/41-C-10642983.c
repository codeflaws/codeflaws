#include<stdio.h>
#include<string.h>
int i,n,f;
char arr[1000];
int main(int argc, char *argv[]){
	scanf("%s",arr);
	n = strlen(arr);
	if(arr[0] == 'd' && arr[1] == 'o' && arr[2] == 't') {
		printf("dot");
                i=3;
        }
	else if(arr[0] == 'a' && arr[1] == 't') {
		printf("at");
                i=2;
        }

	for(;i<n;i++){
		if(i+3<n && arr[i] == 'd' && arr[i+1] == 'o' && arr[i+2] == 't') {
			printf(".");
                        i+=2;
                }

		else if(!f && i+1<n && arr[i] == 'a' && arr[i+1] == 't') {
				printf("@");
                                f=1;
                                i+=1;
                }

		else
			printf("%c",arr[i]);
	}
	return 0;
}
