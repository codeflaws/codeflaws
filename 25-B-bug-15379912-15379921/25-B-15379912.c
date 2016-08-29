#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,j;
	scanf("%d",&n);
	char str[1001];
	char ch[10001];
	scanf("%s",str);
	if (n%2==0){
		j=0;
		for (i=0;i<n+n/2-1;i++){
			if ((i+1)%3==0){
			ch[i]='-';
			}
			else{
				
				ch[i]=str[j];
			//i=i+1;
			j=j+1;
			}
			
		}
	}
	else{
		for(i=0;i<3;i++){
			ch[i]=str[i];
		}
		ch[3]='-';
		j=3;
		for (i=4;i<n+n/2-1;i++){
			if (i%3==0){
			ch[i]='-';
			}
			else{
				
			ch[i]=str[j];
			//i=i+1;
			j=j+1;
			}
			
		}
	}
	printf("%s",ch);
	return 0;
}
