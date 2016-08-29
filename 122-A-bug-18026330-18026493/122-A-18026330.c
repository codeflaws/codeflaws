#include <stdio.h>
int main(int argc, char *argv[]) {
    int a[] ={4,7,47,74,444,447,474,477,744,747,774,777};
    int n=12,i=0,inp,flag=0;
    scanf("%d",&inp);
    while(inp>=a[i] && i<n){
    	if((inp/a[i])%2 == 0 && inp%a[i]==0){
    		flag = 1;
    		break;
    	}
    	i++;
    }
    if(flag == 1){
    	printf("YES\n");
    } else {
    	printf("NO\n");
    }
	return 0;
}
