#include<stdio.h>
#include<stdlib.h>


int x[100000];

typedef struct  Team
{
	int home_color;
	int away_color;
	int home_score;
}team;


int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int intial_homeS = n - 1;
	int sum = intial_homeS * 2;
	int i;
	team *arr = (team *)malloc(sizeof(team)*n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &arr[i].home_color, &arr[i].away_color);
		arr[i].home_score = intial_homeS;
		x[arr[i].home_color]++;
	}


	for ( i = 0; i < n; i++)
	{
		arr[i].home_score += x[arr[i].away_color];
	}

	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", arr[i].home_score, sum-arr[i].home_score);
		
	}
	free(arr);

}