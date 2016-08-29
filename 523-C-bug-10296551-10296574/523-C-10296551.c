/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <stdio.h>
#define MAX_NAME_LENGTH     1001
#define MAX_TEXT_LENGHT     1000001

int Answer;
char name[MAX_NAME_LENGTH];
char text[MAX_TEXT_LENGHT];

int strlen(char *str)
{
	int len;
	for (len=0;str[len];len++);
	/* NOOP */

	return len;
}

int main(int argc, char *argv[]) 
{
	int T, test_case;
	int i, j;
	int len_text, len_name, left, right;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using scanf function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */
	//freopen("input.txt", "r", stdin);

	/*
	   If you remove the statement below, your program's output may not be rocorded
	   when your program is terminated after the time limit.
	   For safety, please use setbuf(stdout, NULL); statement.
	 */
	setbuf(stdout, NULL);

	//scanf("%d", &T);
	//for(test_case = 0; test_case < T; test_case++) {

		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   Implement your algorithm here.
		   The answer to the case will be stored in variable Answer.
		 */
		/////////////////////////////////////////////////////////////////////////////////////////////

		scanf("%s", &name);
		scanf("%s", &text);
		len_text = strlen(text);
		len_name = strlen(name);
		
		left = -1;
		j = 0;
		for (i=0;i<len_text;i++) {
			if ((j < len_name) && (name[j] == text[i]))
				j++;
			if (j == len_name) 	{
				left = i;
				break;
			}
		}

		right  = -1;
		j = len_name;
		for (i=len_text-1;i>=0;i--) {
			if ((j > 0) && (name[j - 1] == text[i]))
				j--;
			if (j == 0) {
				right = i;
				break;
			}
		}

		printf("Left: %d, Right: %d \n", left, right);

		if ((left == -1) || (right == -1) || (right < left))
		{
			Answer = 0;
		}
		else
		{
			Answer = right - left;
		}

		// Print the answer to standard output(screen).
		//printf("Case #%d\n", test_case+1);
		printf("%d\n", Answer);
	
	//}

	return 0;//Your program should return 0 on normal termination.
}
