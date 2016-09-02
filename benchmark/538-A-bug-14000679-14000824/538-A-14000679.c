#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char banner[100] = "";
			
	scanf("%s", banner);
	
	char codeforces[] = "CODEFORCES";
	int len = strlen(codeforces); // Although we know it's 10
	
	int i;
	int index = 0;
	int achieved = 0;
	int status = 0;
	
	for (i = 0; i < strlen(banner); i++)
	{
		if (index == len) // CODEFORCES completed but still iterating; reset index with achieved data
			index = achieved; // index resetted, but must continue checking current letter
		
		if (banner[i] == codeforces[index])
		{
			if (status == 1)
			{
				status = 2;
			}				
			index++;
		}	
		else //if (banner[i] != codeforces[index])
		{
			if (status == 0) // 1st error. save accumulated data
			{
				achieved = index;
				status = 1;
			}
			else if (status == 2) // Another error, reset index by loading achieved data
			{
				index = achieved;
				status = 1;
			}
		}
	}

	if (status == 0 && index == len) // Ideal case, received word is CODEFORCES
		printf("YES\n");	
	else if (status == 1 && achieved == len) // Completed CODEFORCES but got a substring after
		printf("YES\n");
	else if (status == 2 && index == len) // Got a substring but ended completing CODEFORCES
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
