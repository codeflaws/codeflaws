#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int n, i, j,temp;
	char a[105];

	scanf("%d", &n);
	scanf("%s", a);
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		
		}
	}
	for (; i < 2*n; i++)
	{
		for (j = i + 1; j < 2*n; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

		}
	}
	if (a[0] > a[n])
	{
		for (i = 0, j = n; i < n; i++, j++)
		{
			if (a[i] <= a[j])
				break;
		}
		if (i == n)
			printf("YES");
		else
			printf("NO");
	}
	else if (a[0] < a[n])
	{
		for (i = 0, j = n; i < n; i++, j++)
		{
			if (a[i] >= a[j])
				break;
		}
		if (i == n)
			printf("YES");
		else
		printf("NO");
	}
	else
		printf("NO");
	return 0;
}
