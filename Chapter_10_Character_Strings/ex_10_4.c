#include <stdio.h>

void substring(const char source[], int start, int count, char result[])
{
	int i = 0;

 	while ( i < count && source[i + start] != '\0') {
		result[i] = source[i + start];
		++i; 		
 	}
 	result[count] = '\0';
}

int main(void)
{
	void substring(const char source[], int start, int count, char result[]);

	const char stra[] = "two words";
	char result[81];
	substring(stra, 0, 3, result);
	printf("%s\n", result);

	return 0;
}