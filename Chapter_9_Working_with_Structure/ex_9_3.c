// Exercise 3

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time elapsed_time (struct time time1, struct time time2)
{
	struct time elapsedTime;
	elapsedTime.hour = time2.hour > time1.hour ? time2.hour - time1.hour : 24 + (time2.hour - time1.hour);
	elapsedTime.minutes = time2.minutes - time1.minutes;
	if (elapsedTime.minutes < 0) {
		elapsedTime.minutes = 60 + elapsedTime.minutes;
		--elapsedTime.hour;
	}
	elapsedTime.seconds = time2.seconds - time1.seconds;
	if (elapsedTime.seconds < 0) {
		elapsedTime.seconds = 60 + elapsedTime.seconds;
		--elapsedTime.minutes;
	}
	return elapsedTime;
}

int main(void)
{
	// struct time time1 = { .hour = 3, .minutes = 45, .seconds = 15 };
	// struct time time2 = { .hour = 9, .minutes = 44, .seconds = 3 };
	struct time fromTime, toTime, elapsedTime;

	printf("Enter the first time (hh:mm:ss): ");
	scanf("%i:%i:%i", &fromTime.hour, &fromTime.minutes, &fromTime.seconds);

	printf("Enter the second time (hh:mm:ss): ");
	scanf("%i:%i:%i", &toTime.hour, &toTime.minutes, &toTime.seconds);

	elapsedTime = elapsed_time(fromTime, toTime);
	printf("Elapsed time is %.2i hours, %.2i minutes, %.2i seconds\n", 
		elapsedTime.hour, elapsedTime.minutes, elapsedTime.seconds);

	return 0;
}