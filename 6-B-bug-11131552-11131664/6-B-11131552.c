#include <stdio.h>
#include <string.h>

char l[2][103];
char d[256];

int main(int argc, char *argv[]) {
	int n,m,c,i,j;
	scanf("%d %d %c\n",&n,&m,&c);
	int p=0;
	int s,e;
	char *f;
	for (i=0;i<n;i++) {
		scanf("%s\n",l[p]);
		f=strchr(l[p],c);
		if (f!=NULL) {
			s=f-l[p];
			f=strrchr(l[p],c);
			e=f-l[p];
			for (j=s;j<=e;j++) d[l[!p][j]]=1;
			break;
		}
		p=!p;
	}
	for (;i<n;i++) {
		d[l[p][s-1]]=1;
		d[l[p][e+1]]=1;
		scanf("%s\n",l[p]);
		f=strchr(l[p],c);
		if (f==NULL) {
			for (j=s;j<=e;j++) d[l[p][j]]=1;
			break;
		}
		p=!p;
	}
	int cnt=0;
	for (i='A';i<='Z';i++) cnt+=d[i];
	printf("%i\n",cnt);
	return 0;
}
