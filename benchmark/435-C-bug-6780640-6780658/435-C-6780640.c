#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	int a[1000];
	int pos[2000];
	char sign[2000];
	int pos_max=0,pos_min=0;
	int now_pos=0;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	pos[0]=0;
	sign[0]='/';
	a[0]--;
	now_pos=1;
	for(i=0;i<n;i++) {
		for(j=0;j<a[i];j++) {
			sign[now_pos]="/\\"[i%2];
			pos[now_pos]=pos[now_pos-1]+1-2*(i%2);
			if(pos[now_pos]>pos_max)pos_max=pos[now_pos];
			if(pos[now_pos]<pos_min)pos_min=pos[now_pos];
			now_pos++;
		}
	}
	for(i=0;i<now_pos;i++)pos[i]=pos_max-pos[i];
	pos_max=pos_max-pos_min;
	for(i=0;i<pos_max;i++) {
		for(j=0;j<now_pos;j++) {
			putchar((pos[j]==i+(sign[j]=='\\'))?sign[j]:' ');
		}
		putchar('\n');
	}
	return 0;
}
