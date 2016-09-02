/*
 * util.c
 *
 *  Created on: 30 ���� 2014 �.
 *      Author: ulgish
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX(A,B) (((A) > (B))?(A):(B))
#define MIN(A,B) (((A) < (B))?(A):(B))

#define LN printf("\n")
#define TAB printf("\t")
#define SPACE printf(" ")

typedef unsigned long long uint64;
typedef long long int64;
typedef char byte;


void int64_print(int64 n){
	int64 carry = 10;
	if (n == 0){
		printf("0");
		return;
	}
	if (n < 0){
		printf("-");
		n *= -1;
	}
	char buf[20];
	buf[0] = '\0';
	int i = 0, j;
	while (n > 0){
		buf[i] = n % carry;
		n = n / carry;
		i += 1;
	}
	i--;
	for (j = i; j>= 0; j--){
		printf("%c", 48 + buf[j]);
	}
}
void uint64_print(uint64 n){
	uint64 carry = 10;
	if (n == 0){
		printf("0");
		return;
	}
	char buf[20];
	buf[0] = '\0';
	int i = 0, j;
	while (n != 0){
		buf[i] = n % carry;
		n = n / carry;
		i += 1;
	}
	i--;
	for (j = i; j>= 0; j--){
		printf("%c", 48 + buf[j]);
	}
}


uint64 uint64_read(){
	char* s = (char*) calloc(20, sizeof(char));
	s[0] = '\0';
	scanf("%s", s);
	//printf("=======%s\n", s);
	uint64 ret = 0;
	uint64 carry = 1;
	int len = strlen(s), i;
	for (i = 0; i < len; i++){
		ret += carry * (s[len-1-i] - 48);
		carry*=10;
	};
	free(s);
	return ret;
}


int64 int64_read(){
	char* s = (char*) calloc(21, sizeof(char));
	s[0] = '\0';
	scanf("%s", s);
	//printf("=======%s\n", s);
	int64 ret = 0;
	int64 carry = 1;
	int len = strlen(s), i;
	for (i = 0; i < len; i++){
		ret += carry * (s[len-1-i] - 48);
		carry*=10;
	};
	free(s);
	return ret;
}

//#define DEBUG

int main(int argc, char *argv[]){
	char s[201];
	s[0] = '\0';
	scanf("%s", s);
	int k, answer = 0;
	int j,i,len;
	scanf("%d", &k);
#ifdef DEBUG
	printf("k:%d\n", k);
#endif
	int n = strlen(s);
	if (k >= n){
		printf("%d", (k+n));
		return 0;
	}else{
		for (i = 0; i < n; i++){
			for (len = 2; ((len/2) <= (n-i)) && (len <= (k+n)) && ((i + len-1) < (k + n)); len+=2){
#ifdef DEBUG
				printf("i:%d len:%d\n", i, len);
#endif
				j = i;
				char good = 1;
				while (j < (i + (len/2))){
					if ((j   + (len / 2)) >= n){
						goto next;
					}
					if (s[j] != s[j  + (len / 2)]){
						good = 0;
						goto next;
					}
					j++;
					if (j >= n){
						goto next;
					}
				}
				next:
				if (good){
#ifdef DEBUG
				printf("good i:%d len:%d\n", i, len);
#endif

					answer = MAX(answer, len);
				}
			}
		}
	}
	printf("%d\n", answer);
	
}
