#include <stdio.h>
#include <stdlib.h>
#define max(A,B) (A>B?A:B)

int main(int argc, char *argv[]){
	int x1,x2,y1,y2,ans1,ans2,ans3;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	if(x1==x2 || y1==y2) ans1=1;
	else ans1=2;
	if( (x1+y1)%2 != (x1+y1)%2) ans2=0;
	else if(abs(y2-y1)==abs(x2-x1)) ans2=1;
	else ans2=2;
	ans3=max(abs(x1-x2),abs(y2-y1));
	printf("%d %d %d\n",ans1,ans2,ans3);
	return(0);
}
