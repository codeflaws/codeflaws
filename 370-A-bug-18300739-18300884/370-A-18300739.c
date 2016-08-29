#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int r1, c1, r2, c2;
	int rook, bishop , king;
	char color1, color2;
	
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

	//rook
	if (r1 == r2 || c1 == c2)
		rook = 1;
	else
		rook = 2;

	//bishop
	if ((r1 + c1) % 2 == 0)
	{
		color1 = 'B';
	}
	else
	{
		color1 = 'W';
	}

	if ((r2 + c2) % 2 == 0)
	{
		color2 = 'B';
	}
	else
	{
		color2 = 'W';
	}

	if (color1 != color2)
	{
		bishop = 0;
	}
	else
	{
		if (abs(r2 - r1) == abs(c2 - c1))
		{
			bishop = 1;
		}
		else
		{
			bishop = 2;
		}
	}

	//king
	if (abs(r2 - r1) == abs(c2 - c1))
	{
		printf("1");
		king = abs(r2 - r1);
	}
	if (abs(r2 - r1) > abs(c2 - c1))
	{
		printf("2");
		king = abs(c2 - c1) + (abs(r2 - r1) - abs(c2 - c1));
	}
	if (abs(r2 - r1) < abs(c2 - c1))
	{
		printf("3");
		king = abs(r2 - r1) + (abs(c2 - c1) - abs(r2 - r1));
	}


	printf("\n%d %d %d", rook, bishop , king );
	return 0;
}






/*
if ((i + j) % 2 == 0)
{
	Chessboard[i][j] = 'B';
}
else
{
	Chessboard[i][j] = 'W';
}*/