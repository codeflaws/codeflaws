#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char input[300001];
	char arr[300001];
	int n;
	long long answer = 0;

	scanf("%s", input);
	n = strlen(input);

	for (int i = 0; i < n; i++) {
		if ((input[i] - '0' + 1) % 2 == 0)
			arr[i] = 0;
		else if (input[i] - '0' == 2 || input[i] - '0' == 6)
			arr[i] = 1;
		else
			arr[i] = 2;
	}

	for (int i = 0; i < n; i++) {
		if (i < n - 1) {
			if (arr[i] == 0 && arr[i + 1] == 1)
				answer += i + 1;

			if ((arr[i] == 1 || arr[i] == 2) && arr[i + 1] == 2)
				answer += i + 1;
		}

		if (arr[i] == 2)
			answer++;
	}

	printf("%i64d\n", answer);

	return 0;
}