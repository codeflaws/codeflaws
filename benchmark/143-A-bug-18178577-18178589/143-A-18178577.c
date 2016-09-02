#include<stdio.h>
int main(int argc, char *argv[]) {
	int r1,r2;
	scanf("%d%d",&r1,&r2);
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int d1,d2;
	scanf("%d%d",&d1,&d2);
	int a,b,c,d;
	/* ab
	 * cd
	 * */
	int find=0;
	for(a=1;a<=9&&!find;a++){
		for(b=1;b<=9&&!find;b++){
			for(c=1;c<=9&&!find;c++){
				for(d=1;d<=9&&!find;d++){
					if((r1==a+b && r2==c+d) && (c1==a+c && c2==b+d) && (d1==a+d && d2==b+c)){
						if(a!=b && a!=c && a!=b && b!=c && b!=d && c!=d){
							find=1;
							printf("%d %d\n",a,b);
							printf("%d %d\n",c,d);
							break;
						}
					}
				}
			}
		}
	}
	if(!find){
		printf("-1\n");
	}
	return 0;
}
