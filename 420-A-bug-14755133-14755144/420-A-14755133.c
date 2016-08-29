#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int i,j,w,v,f,l,t;
	char ch[100000];
	char str[13]="AIMOHSTUVWXY";
	scanf("%s",ch);
	w=strlen(ch);
	v=strlen(str);
	f=0;
	for (i=0;i<w;i++){
		t=0;
		for (j=0;j<v;j++){
			if (ch[i]==str[j]){
				t=1;
				break;
			}
		}
		if (t==1){
			f=f+1;
		}
	}
	l=0;
	for (i=0;i<w/2;i++){
		if (ch[i]!=ch[w-i-1]){
			l=1;
			break;
		}
	}
	if (f==w && l==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	//printf("%d",v);
	return 0;
}
