#include <stdio.h>
#include <stdlib.h>

static int days_of_month[12] = {31,28,31, 30,31,30, 31,31,30, 31,30,31};
static int days_of_month_leap[12] = {31,29,31, 30,31,30, 31,31,30, 31,30,31};

typedef struct
{
	int year;
	int month;
	int day;
}Date;

int _is_leapyear(int year)
{
	if (year%4 == 0 ) {
		if (year%100 == 0 && year%400 != 0) {
			return 0;
		}
		return 1;
	}
	return 0;
}

void get_cal(char* date, Date* t)
{
	int year;
	int month;
	int day;

	date[4]	= '\0';
	year = atoi(date);

	date[7]	= '\0';
	month = atoi(&date[5]);
	day = atoi(&date[8]);

	t->year = year;
	t->month = month;
	t->day = day;
}


void print_cal(Date* t)
{
	printf("%d %d %d \n", t->year, t->month, t->day);
}

int diff_cal(Date* t1, Date* t2)
{
	//print_cal(t1);
	//print_cal(t2);
	int i;
	int total = 0;
	for (i = t1->year; i < t2->year; i++) {
		//printf("year : %d \n", i);
		if (_is_leapyear(i))
			total += 366;
		else
			total += 365;
	}

	int* parr = &days_of_month[0];
	if (_is_leapyear(t1->year))
		parr = &days_of_month_leap[0];

	int j;
	for (j = 1; j <= t1->month-1; j++) {
		total -= parr[j-1];
	}
	total -= t1->day;

	// t2 handling
	parr = &days_of_month[0];
	if (_is_leapyear(t2->year))
		parr = &days_of_month_leap[0];

	for (j = 1; j <= t2->month-1; j++) {
		total += parr[j-1];
	}
	total += t2->day;

	if (total < 0)
		total *= -1;
	return total;
}

int main(int argc, const char *argv[])
{
	char date1[11];
	char date2[11];
	
	scanf("%s", date1);
	scanf("%s", date2);

	Date t1, t2;
	get_cal(date1,&t1);
	get_cal(date2,&t2);

	int diff = 0;
	if (t2.year > t1.year)
		diff = diff_cal(&t1, &t2);
	else 
		diff = diff_cal(&t2, &t1);

	printf("%d\n", diff);
	return 0;
}
