#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct item {
	int val,size;
	char name[24];
	int type;
};

struct worm {
	int type;
	int home;
	char name[24];
	int add;
};

struct item a[128];
struct worm b[1024];
int add[128][10];
int pp[128];
int n,m;
int t[3][1024];
int p[3];
int v[1024];

int cmp(const void *x,const void *y) {
	return b[*(int *)y].add-b[*(int *)x].add;
}

void out(int idx) {
	int i,j;
	for(i=pp[idx];i<a[idx].size;i++) {
		for(j=0;j<m && v[j];j++);
		if (j<m) add[idx][pp[idx]++]=j,v[j]=1; else break;
	}
	printf("%s %d",a[idx].name,pp[idx]);
	for(i=0;i<pp[idx];i++) printf(" %s",b[add[idx][i]].name);
	puts("");
}

int main(int argc, char *argv[]) {
	int i,j,s=0,weapon=-1,armor=-1,orb=-1;
	char str[128];

	scanf("%d",&n);
	for(i=0;i<n;i++) {
		int atk,def,res;
		scanf("%s %s %d %d %d %d",a[i].name,str,&atk,&def,&res,&a[i].size);
		s+=a[i].size;
		if (str[0]=='w') a[i].type=0,a[i].val=atk;
		else if (str[0]=='a') a[i].type=1,a[i].val=def;
		else a[i].type=2,a[i].val=res;
		pp[i]=0;
	}
	scanf("%d",&m);
	p[0]=p[1]=p[2]=0;
	for(i=0;i<m;i++) {
		scanf("%s %s %d",b[i].name,str,&b[i].add);
		if (str[0]=='g') t[0][p[0]++]=i,b[i].type=0;
		else if (str[0]=='s') t[1][p[1]++]=i,b[i].type=1;
		else t[2][p[2]++]=i,b[i].type=2;
		scanf("%s",str);
		for(j=0;j<n;j++) if (strcmp(str,a[j].name)==0) break;
		b[i].home=j;
	}
	qsort(t[0],p[0],sizeof(t[0][0]),cmp);
	qsort(t[1],p[1],sizeof(t[1][0]),cmp);
	qsort(t[2],p[2],sizeof(t[2][0]),cmp);
	if (s==m) {
		for(j=0;j<m;j++) {
			i=b[j].home;
			add[i][pp[i]++]=j;
			if (b[j].type==a[i].type) a[i].val+=b[j].add;
		}
	} else {
		for(i=0;i<n;i++) for(j=0;j<a[i].size && j<p[a[i].type];j++) {
			add[i][pp[i]++]=t[a[i].type][j];
			a[i].val+=b[t[a[i].type][j]].add;
		}
	}
	for(i=0;i<n;i++) {
		if (a[i].type==0) {
			if (weapon<0 || a[i].val>a[weapon].val) weapon=i;
		} else if (a[i].type==1) {
			if (armor<0 || a[i].val>a[armor].val) armor=i;
		} else {
			if (orb<0 || a[i].val>a[orb].val) orb=i;
		}
	}
	memset(v,0,sizeof(v));
	for(i=0;i<pp[weapon];i++) v[add[weapon][i]]=1;
	for(i=0;i<pp[armor];i++) v[add[armor][i]]=1;
	for(i=0;i<pp[orb];i++) v[add[orb][i]]=1;
	out(weapon);
	out(armor);
	out(orb);
	return 0;
}