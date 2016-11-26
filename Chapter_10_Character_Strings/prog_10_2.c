// Function to count the number of characters in a string

#include <stdio.h>

int stringLenght(const char string[])
{
	int count = 0;
	while (string[count] != '\0') {
		++count;
	}
	return count;
}

int main(void)
{
	int stringLenght(const char string[]);

	const char s1[] = { 'T', 'e', 's', 't', ' ', '\0' };
	const char s2[] = { 'w', 'o', 'r', 'k', 's', '.', '\0' };

	printf("%i   %i\n", stringLenght(s1), stringLenght(s2));

	return 0;
}