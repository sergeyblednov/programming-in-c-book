#include <stdio.h>
#include <stdbool.h>

void removeString (char source[], int start, int count)
{
	int i = 0;
	while ( source[i] != '\0' ) {
		if ( i >= start )
		source[i] = source[i + count];
		++i;
		printf("i: %i, %s\n", i, source);
	}
}

int main(void)
{
	void removeString(char source[], int start, int count);

	char source[] = "the wrong son";
	removeString(source, 4, 6);
	printf("The result is: \"%s\"\n", source);

	return 0;
}