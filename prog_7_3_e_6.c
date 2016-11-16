//Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void) 
{
	int i, FibonacciCurrent;

	int FibonacciPrePrevious = 0; //by definitaion
	int FibonacciPrevious = 1;
	printf("%i\n%i\n", FibonacciPrePrevious, FibonacciPrevious);
	for (i = 0; i < 13; ++i)
	{
		FibonacciCurrent = FibonacciPrePrevious + FibonacciPrevious;
		printf("%i\n", FibonacciCurrent);
		FibonacciPrePrevious = FibonacciPrevious;
		FibonacciPrevious = FibonacciCurrent;
	}

	return 0;
}