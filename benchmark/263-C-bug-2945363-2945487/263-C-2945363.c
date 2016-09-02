#include <stdio.h>

long a[100002][5],n;

long sm(long x,long y){
	long i,j,o=0;
	for(i=1;i<5;i++)
		for(j=1;j<5;j++)
			o+=(a[x][i]==a[y][j]);
	return o;
}

long path[8],anti[7],fnd=0;

void ph(long v,long ind){
	if(a[v][0]==-1){
		if(ind==7){fnd=1;}
		return;
	}
	path[ind]=v;
	if(ind>3){if(v!=anti[path[ind-3]])return;}
	a[v][0]=-1;
	long i;
	for(i=1;i<5;i++){
		ph(a[v][i],ind+1);
		if(fnd==1)return;
	};
	a[v][0]=0;
}


long ttr(){
	long xx,yy,i;
	for(xx=1;xx<7;xx++){
		for(yy=1;yy<7;yy++){
			if(xx==yy)continue;
			if(sm(xx,yy)==4){
				/*printf("anti[%ld]==%ld\n",xx,yy);*/
				anti[xx]=yy;break;}
		}
	}
	ph(1,1);
	/*printf("fnd is %ld\n",fnd);*/
	for(i=1;i<6;i++){a[path[i]][0]=path[i+1];}
	a[path[6]][0]=1;

	return 6;
}



long p,ff=0;
long tr(long f,long v){
	if(v==ff)return 1;
	for(p=1;p<5;p++){
		if((f!=a[v][p])&&(sm(v,a[v][p])==2)){
			return 1+tr(v,a[v][0]=a[v][p]);
		}
	}
	return 0;
}

int main(int argc, char *argv[]){
	long i,b,c,t,d,o;
	for(i=0;i<100002;i++)a[i][0]=0;

	scanf("%ld",&n);
	for(i=0;i<2*n;i++){
		scanf("%ld %ld", &b, &c);
		a[b][++a[b][0]]=c;
		a[c][++a[c][0]]=b;

		t=a[b][0];while(t>1 &&a[b][t]<a[b][t-1]){
			d=a[b][t];a[b][t]=a[b][t-1];a[b][t-1]=d;t--;
		}

		t=a[c][0];while(t>1 &&a[c][t]<a[c][t-1]){
			d=a[c][t];a[c][t]=a[c][t-1];a[c][t-1]=d;t--;
		}
	}



	for(i=1;i<=n;i++){
		a[i][0]=0;
		/*printf("%ld:",i);
		for(c=1;c<5;c++){
			printf("%3ld",a[i][c]);
		}
		printf("\n");*/
	}

	if(n==5){
		printf("1 2 3 4 5");
	}else{
		if (n==6){
			o=ttr();
		}else {
			long tt;
			for(tt=1;tt<5;tt++)if(sm(1,a[1][tt])==2){ff=a[1][tt];break;}
			/*printf("ff is %ld\n",ff);*/
			o=0;if(ff!=0)o=tr(ff,1);
		}

		if(o<n){
			printf("-1");
		}else{
			printf("1");
			i=1;while(--o){
				printf(" %ld",a[i][0]);
				i=a[i][0];
			}
		}
	}
	return 0;

}

