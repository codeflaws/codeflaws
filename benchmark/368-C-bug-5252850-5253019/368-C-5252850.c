#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
char s[100010];
int a[100100];
int f1[100100],f2[100100],f3[100100];
int main(int argc, char *argv[]) {
	int n,m,i,a,b,c,sum1,sum2,sum3,flag;
	while(scanf("%s",s)!=EOF) {
		scanf("%d",&m);
		memset(f1,0,sizeof(f1));
		memset(f2,0,sizeof(f2));
		memset(f3,0,sizeof(f3));
		flag=0;
		for(i=0;s[i];i++) {
			if(flag==0) {
				flag=1;
			if(s[i]=='x') 
				f1[i+1]=1;
			if(s[i]=='y')
				f2[i+1]=1;
			if(s[i]=='z')
				f3[i+1]=1;
			}
			else {
				if(s[i]=='x')
					f1[i+1]++;
				if(s[i]=='y')
					f2[i+1]++;
				if(s[i]=='z')
					f3[i+1]++;
				f1[i+1]+=f1[i];
				f2[i+1]+=f2[i];
				f3[i+1]+=f3[i];
			}
		}
		while(m--) {
			scanf("%d%d",&b,&c);
			if(c-b+1<3) {
				printf("YES\n");
				continue;
			}
			sum1=f1[c]-f1[b-1];
			sum2=f2[c]-f2[b-1];
			sum3=f3[c]-f3[b-1];
			if(sum1==0||sum2==0||sum3==0) {
				printf("NO\n");
				continue;
			}
			if(fabs(sum1-sum2)>2||fabs(sum1-sum3)>2||fabs(sum2-sum3)>2)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}


