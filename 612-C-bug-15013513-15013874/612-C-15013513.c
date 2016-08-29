/* �� ���������� ��������� ������������������ */
#include <stdio.h>
#include <string.h>

#define SIZE 1000000

struct Stack {
	int elem[SIZE];
	int top;
} st;

void push (struct Stack *st, char v)
{
	st->elem[st->top] = v;
	++st->top;
}

char pop (struct Stack *st)
{
	return st->elem[--st->top];
}

int empty (const struct Stack *st)
{
	return st->top == 0;
}

void makenull (struct Stack *st)
{
	st->top = 0;
}

char s[SIZE + 1];

int main(int argc, char *argv[])
{
	int i, cnt = 0;
	char *open_br = "({[<";
	char *close_br = ")}]>";

	makenull (&st);
	gets (s);

	for (i = 0; s[i]; i++) {
		if (strchr(open_br, s[i]) != NULL)
			push (&st, s[i]);
		else {
			char br;
			if (empty (&st))
				break;
			br = pop (&st);
			if (strchr(close_br, s[i]) - close_br != strchr (open_br, br) - open_br)
				cnt++;
		}
	}

	if (s[i])
		puts ("Impossible");
	else
		printf ("%d\n", cnt);

	return 0;
}