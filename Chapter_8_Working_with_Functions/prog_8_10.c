// Finding the minimum value in a array

#include <stdio.h>

int minimum(int values[], int numberOfElements)
{
	int minValue, i;

	minValue = values[0];

	for (i = 0; i < numberOfElements; ++i)
		if (values[i] < minValue)
			minValue = values[i];

	return minValue;
}

int main(int argc, char const *argv[])
{
	int array1[5] = { 157, 34, 24, 45, 16 };
	int array2[7] = { 56, 34, 3, 7, 35, -56, 67 };

	int minimum(int values[], int numberOfElements);

	printf("array1 min is %i\n", minimum(array1, 5));
	printf("array2 min is %i\n", minimum(array2, 7));

	return 0;
}