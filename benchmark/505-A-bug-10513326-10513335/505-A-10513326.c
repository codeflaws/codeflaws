#include <stdio.h>
#include <string.h>
int palindrome(char checkstring1[11], int length);
int main(int argc, char *argv[]){
	int i,flag=0,j,k,r,l;
	char string[11];
	char string1[12];
	scanf("%s", string);
	for (i = 0; i <= strlen(string); i++){
		for (j = 0; j <= 25; j++){
			string1[i] = 'a' + j;
			l = 0;
			for (k = 0; k < strlen(string)+1; k++){
				if (i != k){
					string1[k] = string[l];
					l++;
				}
			}
			flag = palindrome(string1, strlen(string));
			if (flag){
				break;
			}
			}
		if (flag){
			break;
		}
		}
	if (flag){
		for (r = 0; r < strlen(string) + 1; r++){
			printf("%c", string1[r]);
		}
	}
	return 0;
}
int palindrome(char checkstring[12], int length){
	int count = 0, i;
	for (i = 0; i < (length+1) / 2; i++){
		if (checkstring[i] == checkstring[length - i])
			count++;
	}
	if (count == (length + 1) / 2)
		return 1;
	else
		return 0;
}
