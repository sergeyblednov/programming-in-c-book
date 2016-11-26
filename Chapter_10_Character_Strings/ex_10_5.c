#include <stdio.h>
#include <stdbool.h>

int findString(const char source[], const char search[])
{
	int i = 0, j = 0;

	while( source[i] != search[0])
		++i;

	while ( source[i + j] == search[j])
		++j;
	
	if ( search[j] == '\0' )
 		return i;
 	else
 		return -1;
}

int main(void)
{
	int index, findString(const char source[], const char search[]);

	const char source[] = "a chatterbox";
	const char search[] = "hatt";
	index = findString(source, search);
	 if ( index != -1)
	 	printf("Searching string \"%s\" found at index: %i\n", search, index);
	 else
	 	printf("Sorry, the string %s did not find.\n", search);

	return 0;
}