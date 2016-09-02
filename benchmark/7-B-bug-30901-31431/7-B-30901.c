#include<stdio.h>
#include<string.h>

int mm[128];
int n,m;

int main(int argc, char *argv[]) {
	char str[16];
	int cnt=0,t,i,j;

	for(scanf("%d %d",&n,&m);n--;) {
		scanf("%s",str);
		if (str[0]=='a') {
			scanf("%d",&t);
			for(i=0,j=-1;i<m;i++) {
				if (!mm[i] && i-j>=t) break;
				else if (mm[i]) j=i;
			}
			if (i<m) {
				printf("%d\n",++cnt);
				for(++j;j<=i;j++) mm[j]=cnt;
			} else puts("NULL");
		} else if (str[0]=='e') {
			scanf("%d",&t);
			for(i=j=0;i<m;i++) if (mm[i]==t) mm[i]=0,j=1;
			if (!j) puts("ILLEGAL_ERASE_ARGUMENT");
		} else for(i=j=0;i<m;i++) if (mm[i]) t=mm[i],mm[i]=0,mm[j++]=t;
	}
	return 0;
}