#include<stdio.h>
#include<stdlib.h>
#define MOD 60

int main(int argc, char *argv[]){
	int a,ta,b,tb,s,i,j,k,hr,min,sbh,sbm,pbm,pbh;
	scanf("%d%d%d%d%d%*c%d",&a,&ta,&b,&tb,&hr,&min);
	sbh=5;
	sbm=0;
	pbm=tb;
	pbh=sbh+pbm/MOD;
	pbm%=MOD;
	int count=0;
    while(pbh<hr){
		pbm+=b;
		pbh+=pbm/MOD;
		pbm%=MOD;
	}
	while(pbh==hr && pbm<=min){
		pbm+=b;
		pbh+=pbm/MOD;
		pbm%=MOD;
	}
	sbh=pbh;
	sbm=pbm-tb;
	if(sbm<0){
        sbh=pbh-(-sbm-1)/MOD-1;
        sbm=(120+sbm)%MOD;
	}
	if(sbh<5){
        sbh=5;
        sbm=0;
	}
	//printf("%d:%d %d:%d\n",sbh,sbm,hr,min);
	hr = hr + (ta+min)/MOD;
	min = (ta+min)%MOD;
	//printf("%d:%d %d:%d\n",sbh,sbm,hr,min);

	if(sbh<24){
		while(sbh<=hr && sbh<24){
			if(sbh==hr && sbm>=min){
				break;
			}
			count++;
			sbm+=b;
			sbh+=sbm/MOD;
			sbm%=MOD;
		}
	}
    printf("%d\n",count);
	return 0;
}
