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

// Day of the week

int numberDayOfWeek(struct date d)
{
	int numberOfDays(struct date d);
	return (numberOfDays(d) - 621049) % 7; 
}

int main (void)
{
	int numberDayOfWeek(struct date d);
	
	struct date date;

	printf("Enter the first date (mm dd yyyy): ");
	scanf("%i %i %i", &date.month, &date.day, &date.year);

	printf("Day of the week: ");

	switch (numberDayOfWeek(date)) {
		case 0:
			printf("Sunday\n"); 
			break;
		case 1:
			printf("Monday\n"); 
			break;
		case 2:
			printf("Tuesday\n"); 
			break;
		case 3:
			printf("Wendsday\n"); 
			break;
		case 4:
			printf("Thuesday\n"); 
			break;
		case 5:
			printf("Friday\n"); 
			break;
		case 6:
			printf("Saturday\n"); 
			break;
		default:
			printf("Wrong day\n");
		break;
	}
	
	return 0;
}






