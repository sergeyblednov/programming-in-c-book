//Programm to determine tomorrow date

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};


int f(struct date d)
{
	int days;
	if ( d.month <= 2) {
		days = d.year - 1;
	} else {
		days = d.year;
	}
	return days;
}

int g(struct date d)
{
	int days;
	if ( d.month <= 2) {
		days = d.month + 13;
	} else {
		days = d.month + 1;
	}
	return days;
}

//Function to find the number of days of a date

int numberOfDays(struct date d) 
{
	int f(struct date d);
	int g(struct date d);
	return 1461 * f(d) / 4 + 153 * g(d) / 5 + d.day;
}

int main (void)
{
	struct date firstDate, secondDate;
	int elapsed;

	printf("Enter the first date (mm dd yyyy): ");
	scanf("%i %i %i", &firstDate.month, &firstDate.day, &firstDate.year);

	printf("Enter the second date (mm dd yyyy): ");
	scanf("%i %i %i", &secondDate.month, &secondDate.day, &secondDate.year);

	elapsed = numberOfDays(firstDate) - numberOfDays(secondDate);

	printf("Number of elapsed days is %i\n", elapsed);

	return 0;
}
