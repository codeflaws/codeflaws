#include <stdio.h>

int main(int argc, char *argv[])
{
	char br[100001];
	int digits[10]={0};
	char s[100001];
	int i,j;

	scanf("%s",br);
	scanf("%s",s);

	for(i=0;s[i]!=0;++i) digits[s[i]-'0']++;


	for(i=0;br[i]!=0;++i)
		for(j=9;j>=0;--j){
			if(br[i]>=j+'0') break;
			if(digits[j]>0){ digits[j]--; br[i]=j+'0'; break; }
		}
	printf("%s",br);
	return 0;
}