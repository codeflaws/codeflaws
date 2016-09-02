#include<stdio.h>
#include<stdlib.h>

#define MOD 1000000007
int **dar,**car,n,**match;

char s[50004];

int main(int argc, char *argv[]){
	int i,j;
	scanf("%d",&n);
	dar=(int **)malloc(sizeof(int *)*n);
	car=(int **)malloc(sizeof(int *)*n);
	match=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++){
		dar[i]=(int *)malloc(sizeof(int)*n);
		car[i]=(int *)malloc(sizeof(int)*n);
		match[i]=(int *)malloc(sizeof(int)*n);
		for(j=0;j<n;j++){
			dar[i][j]=-1;
			car[i][j]=-1;
			match[i][j]=-1;
		}
	}
	scanf("%s",s);
	printf("%d\n",cp(0,0));
	return 0;
}

int cp(int a,int b){
	if(a>=n||b>=n)return 0;
	if(a<0)return cp(0,b);
	if(b<a)return cp(a,a);
	if(car[a][b]==-1){
		car[a][b]=((long long)cp(a,b+1)+(long long)dp(a,b))%MOD;
	}
	//	printf("cp %d %d=%d\n",a,b,car[a][b]);
	return car[a][b];
}

int dp(int a,int b){
	int i,j;
	if(a>=n||b>=n)return 0;
	if(a<0)return dp(0,b);
	if(b<a)return dp(a,a);	
	if(dar[a][b]==-1){
		if(b==n-1&&s[a]!='0'){
			dar[a][b]=1;
			return 1;
		}
		else if(s[a]=='0'||s[b+1]=='0'||b+1-a>n-b-1){
			dar[a][b]=0;
			return 0;
		}
		/*for(i=0;i<=b-a;i++){
			if(s[a+i]!=s[b+1+i])break;
			}*/
		i=mp(a,b+1);
		if(i<=b-a&&s[a+i]>s[b+1+i])i=b-a+1;
		if(i<=b-a){
			dar[a][b]=cp(b+1,b+1+b-a);
		}
		else{
			if(b+1+i==n)
				dar[a][b]=0;
			else
				dar[a][b]=cp(b+1,b+1+i);
		}
	}
	//	printf("dp %d %d =%d\n",a,b,dar[a][b]);
	return dar[a][b];
}

int mp(int a,int b){
	if(a>b)return mp(b,a);
	if(b==n)return 0;
	if(a==b)return n-a;
	if(match[a][b]==-1){
		if(s[a]==s[b])
			match[a][b]=1+mp(a+1,b+1);
		else
			match[a][b]=0;
	}
	return match[a][b];
}
