#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	char c[102];
	int a=0,b=0,i;
	scanf("%s",&c);
	for(i=0;i<strlen(c);i++){
		if(c[i]=='0'){
			a++;
			if(a>=7)
		    {
		    	printf("YES");
		    	break;
		    }
			b=0;
		}
	    else{
	    b++;
			if(b>=7)
			{
		    	printf("YES");
		    	break;
		    }
			b=0;	
	    }	
	}
	if(a<7&&b<7)
	printf("NO");
return 0;
}
