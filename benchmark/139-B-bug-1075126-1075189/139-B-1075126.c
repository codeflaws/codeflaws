#include <stdio.h>
#include <stdlib.h>
int rm[500];
int hrm[500];
int obd[500];
int obw[500];
int obs[500];

typedef struct {
 int d;
 int w;
 int s;
} ob;

ob t[500];

int fun(const void* a1, const void* a2){
	int t1=((ob*)a1)->s, t2=((ob*)a2)->s;
	if(t1>t2){
		return 1;
	} else if(t1==t2){
		return 0;
	} else {
		return -1;
	}
}

int main(int argc, char *argv[]){
 int n, n1, s=0, t1, t2, i, j, t3;
 scanf("%d", &n);
 for(i=0; i<n; i++){
	 scanf("%d %d %d", &t1, &t2, &t3);
	 hrm[i]=t3;
	 rm[i]=(t1+t2)*2;
 }
 scanf("%d", &n1);
 for(i=0; i<n1; i++){
	 scanf("%d %d %d", &t[i].d, &t[i].w, &t[i].s);
 }
 qsort(t, n1, sizeof(ob), &fun);
 for(i=0; i<n; i++){
	 t3=0xFFFFFFF;
	 for(j=0; j<n1; j++){
		t1=t[j].d/hrm[i]*t[j].w;
		//printf("iz rul %d, %d, %d\n", t1, rm[i], obs[j]);
		t2=(rm[i]/t1+(((rm[i]%t1)==0)?0:1))*t[j].s;
		if(t2<t3){
			t3=t2;
		}
		if((rm[i]/t1+(((rm[i]%t1)==0)?0:1))==1){
			break;
		}
		//printf("j= %d, s= %d\n", j, t3);
	 }
	 s+=t3;
 }
 printf("%d", s);
 return 0;
}
