/*
 ============================================================================
 Name        : StringTask.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 !=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=!=
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[]) {



	char currentChar=getchar();
	while(currentChar!=EOF&&currentChar!='\n')
	{
		//Check that's not a,e,i,o,u,y,A,E,I,O,U,Y
		if(currentChar!='a'&&currentChar!='e'&&currentChar!='i'&&currentChar!='o'&&currentChar!='u'&&currentChar!='y'&&currentChar!='A'&&currentChar!='E'&&currentChar!='I'&&currentChar!='O'&&currentChar!='U'&&currentChar!='Y')
		{
			putchar('.');
			if(isupper(currentChar))
			{
				putchar(tolower(currentChar));
			}
			else
			{
				putchar(currentChar);
			}
		}
		currentChar=getchar();

	}

	return EXIT_SUCCESS;
}
