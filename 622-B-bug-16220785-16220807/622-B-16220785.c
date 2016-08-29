/*
 * main.c
 * 
 * Copyright 2016 elmihailol <elmihailol@elmihailol-ubuntu>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, p;
	printf("Time: ");
	scanf("%d:%d", &x, &y);
	printf("Time+: ");
	scanf("%d", &p);
	y=y+p;
	while(y>=60)
	{
		x++;
		y-=60;
	}
	while(x>=24)
	{
		x-=24;
	}
	if(x<10 && y<10)
	{
		printf("0%d:0%d",x, y);
	}
	if(x<10 && y>=10)
	{
		printf("0%d:%d",x, y);
	}
	if(x>=10 && y<10)
	{
		printf("%d:0%d",x, y);
	}
	if(x>=10 && y>=10)
	{
		printf("%d:%d",x, y);
	}
	int i;
	
	return 0;
}





