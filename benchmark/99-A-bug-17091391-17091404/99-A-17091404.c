#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int i,j,w,f;
	char str[10001];
	scanf("%s",str);
	w=strlen(str);
	for (i=0;i<w;i++){
		if (str[i]=='.'){
			f=i;
			break;
		}
	}
	
	if (str[f-1]=='9'){
		printf("GOTO Vasilisa.");
	}
	else{
		if (str[f+1]>='5'){
			str[f-1]=str[f-1]+1;
			if (str[f-1]=='0'){
				for (j=1; ;j++){
					str[f-1-j]=str[f-1-j]+1;
					if (str[f-1-j]!='0'){
						break;
					}
				}
			}
		}
			for (i=0;i<f;i++){
				printf("%c",str[i]);
			}
		
		
	}
	return 0;
}
