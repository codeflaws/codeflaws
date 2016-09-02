#include <stdio.h>
#include <string.h>

int h[10], n, i;
char s[50];

int main(int argc, char *argv[]) {
	scanf("%d %s",&n ,s);
	for(i = 0 ; i < strlen(s) ; i++){
		switch(s[i]){
			case '2':h[2]++;break;
			case '3':h[3]++;break;
			case '4':h[3]++;h[2]+=2;break;
			case '5':h[5]++;break;
			case '6':h[5]++;h[3]++;break;
			case '7':h[7]++;
			case '8':h[7]++;h[2]+=3;break;
			case '9':h[7]++;h[2]++;h[3]+=2;break;
		}
	}
	for(i = 9 ; i >= 0 ; i--){
		while(h[i]--)
			printf("%d",i);
	}
return 0;
}
