#include <stdio.h>
#include <stdbool.h>

// Function to determinate if a character is alphabetic

bool alphabetic(const char c)
{
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
		return true;
	} else {
		return false;
	}
}

// Function to count the number of words in a string

int countWords(const char string[])
{
	int i, wordCount = 0;
	bool isLookingForWord = true, alphabetic(const char c);

	for (i = 0; string[i] != '\0'; ++i) {
		
		if ( alphabetic(string[i]) ) {
			if ( isLookingForWord ) {
				++wordCount;
				isLookingForWord = false;
			}
		} else {
			isLookingForWord = true;
		}
	}
	return wordCount;
}

void readLine(char buffer[])
{
	int i = 0;
	char character;

	do {
		character = getchar();
		buffer[i] = character;
		++i;
	} while ( character != '\n' );

	buffer[i - 1] = '\0';		
}

int main(void)
{
	char text[81];
	int totalWords = 0;
	int countWords(const char string[]);
	void readLine(char buffer[]);
	bool endOfText = false;

	printf("Type in your text.\n");
	printf("When you are done, press 'RETURN'.\n\n");

	while( !endOfText ) {
		readLine(text);


		if ( text[0] == '\0' ) {		
			endOfText = true;
		} else {
			totalWords += countWords(text);
		}
	}

	printf("\nThere are %i words int the above text\n", totalWords);

	return 0;
}