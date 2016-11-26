// Exercise 5

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

//Function to calculate tomorrow's date

struct time timeUpdate(struct time now)
{
	++now.seconds;

	if ( now.seconds == 60 ) {
		now.seconds = 0;
		++now.minutes;

		if ( now.minutes == 60 ) {
			now.minutes = 0;
			++now.hour;

			if ( now.hour == 24 ) {
				now.hour = 0;
			}
		}
	}

	return now;
};

//Function to find the number of days in a month

int numberOfDays(struct date d) 
{
	int days;
	bool isLeapYear(struct date d);
	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	
	if ( isLeapYear(d) == true && d.month == 2 ) {
		days = 29;
	} else {
		days = daysPerMonth[d.month - 1];
	}
	return days;
}

//Function to determine if it's a leap year

bool isLeapYear(struct date d) 
{
	bool leapYearFlag;
	if ( (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0) ) {
		leapYearFlag = true;
	} else {
		leapYearFlag = false;
	}
	return leapYearFlag;
}

//Function to calculate tomorrow's date

struct date dateUpdate(struct date today)
{
	struct date tomorrow;
	int numberOfDays(struct date d);

	if ( today.day != numberOfDays(today) ) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if ( today.month == 12 ) { 		//end of year
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;		
	}
	else {									//end of month	
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;			
	}
	return tomorrow;
};

struct dateAndTime clockKeeper(struct dateAndTime event)
{
	struct time timeUpdate(struct time now);
	struct date dateUpdate(struct date today);

	struct dateAndTime nextEvent;
	nextEvent.stime = timeUpdate(event.stime);
	if ( nextEvent.stime.hour == 0 && nextEvent.stime.minutes == 0 && nextEvent.stime.seconds == 0) {
	 	nextEvent.sdate = dateUpdate(event.sdate);
	 } else {
	 	nextEvent.sdate = event.sdate;
	 }

	 return nextEvent;
}

int main(void)
{
	struct dateAndTime clockKeeper(struct dateAndTime event);
	struct dateAndTime currentDateAndTime, nextDateAndTime;

	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &currentDateAndTime.sdate.month, &currentDateAndTime.sdate.day, &currentDateAndTime.sdate.year);

	printf("Enter the time (hh:mm:ss): ");
	scanf("%i:%i:%i", &currentDateAndTime.stime.hour, &currentDateAndTime.stime.minutes, &currentDateAndTime.stime.seconds);

	nextDateAndTime = clockKeeper(currentDateAndTime);

	printf("Updated date is %.2i/%.2i/%.2i\n", nextDateAndTime.sdate.month, nextDateAndTime.sdate.day, nextDateAndTime.sdate.year % 100);
	printf("Updated time is %.2i:%.2i:%.2i\n", nextDateAndTime.stime.hour, nextDateAndTime.stime.minutes, nextDateAndTime.stime.seconds);

	return 0;
}