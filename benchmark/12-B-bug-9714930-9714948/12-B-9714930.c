/*BISMILLAHIRRAHMANIRRAHIM*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

#define max(x,y) ((x>y) ? (x) : (y))
#define min(x,y) ((x<y) ? (x) : (y))
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define ROF(i,a,b) for(i=a;i>=b;i--)
#define Pi(x) printf("%d",x)
#define S1(x) scanf("%d",&x)
#define Pc(x) printf("%c",x)
#define S2(x,y) scanf("%d %d",&x,&y)
int i,j,s=0,u,u2,a,b,t,n,m,top,min=1000,arr[10000],dizi[10000],yeni[10000],max=-1000,k,x,y,p,temp,snc,k,sayac,sum;
char c,acc[10000],dizc[1000];
int main(int argc, char *argv[]){
	scanf("%s %s",acc,dizc);
	u=strlen(acc);
	u2=strlen(dizc);
	
	FOR(i,0,u){
		arr[i]=acc[i]-'0';
		dizi[i]=dizc[i]-'0';
	}
	FOR(i,0,u){
		FOR(j,0,u){
			if(arr[j]<min){
				min=arr[j];
				k=j;
			}
		}
		yeni[i]=min;
		min=100;
		arr[k]=100;
	}
	//FOR(i,1,u)	printf("%d",yeni[i]);
	
	FOR(i,1,u){
		if(yeni[i])
			break;
		
		else{
			FOR(j,i,u){
				if(yeni[j]){
					yeni[i]=yeni[j];
					yeni[j]=0;
					p=1;
					break;
				}}
		}
		if(p) break;
	}
//	FOR(i,1,u)    printf("%d",yeni[i]);

	FOR(i,1,u){
		if(yeni[i] != dizi[i-1]){
		//	printf("WRONG_ANSWER");
			x=1;
		}
	}
	if(!x)printf("OK");
	else printf("WRONG_ANSWER");
	return 0;
}
