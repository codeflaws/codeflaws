#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char s[201], cc[255];
    int n, fl = 0, flag = 0, i, j, jj = -1, kon = 0, exit = 0;
	scanf("%s", s);
	if (s[0] != '@'){
        n = 0;
        for (i = 1; i <= strlen(s); i++){
        	if (n == -1){
        		if (s[i] != '@')
        		    n = i;
        		else{
        			printf("No solution\n");
        			return(0);
        		}
        	}
        	if (fl == 1){
        		if (s[i] != '@'){
        		fl = 0;
        		if (flag != 0){
        			jj++;
        			cc[jj] = ',';
        			for (j = n; j <= i; j++){
        				jj++;
        				cc[jj] = s[j];
        			}
        		}
        		else{
        			for (j = n; j <= i; j++){
        				jj++;
        				cc[jj] = s[j];
        			}
        			flag = 1;
        		}
        		n = -1;
        		kon = i;
        		exit = 1;
        	}
        	else{ 
        	    printf("No solution\n");
		        return(0);
        	}
            }
        	else if (s[i] == '@')
        	         fl = 1;
        }        
		
	}
	else {
		printf("No solution\n");
		return(0);
	} 
	if (exit == 0){
		printf("No solution\n");
		return(0);
	}
	for (i = 0; i <= jj; i++)
	    printf("%c", cc[i]);  
	if (kon != strlen(s))
	    for (i = kon + 1; i < strlen(s); i++)
	        printf("%c", s[i]);  
return(0);
}

