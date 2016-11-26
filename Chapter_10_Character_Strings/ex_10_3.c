#include <stdio.h>
#include <stdbool.h>

// Function to determinate if a character is alphabetic

bool alphabetic(const char c)
{
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '\'' ) {
		return true;
	} else {
		return false;
	}
}

bool numeral(const char c)
{
	if ( (c >= '0' && c<= '9') || c == ',' || c == '.')
		return true;
	else
		return false;
}

// Function to count the number of words in a string

int countWords(const char string[])
{
	int i, wordCount = 0;
	bool isLookingForWord = true, alphabetic(const char c);

	for (i = 0; string[i] != '\0'; ++i) {
		
		if ( alphabetic(string[i]) || numeral(string[i]) ) {
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

int main(void)
{
	const char text1[] = "1, 2, 3! Well, here goes.";
	const char text2[] = "3.5 and here we go... again, Mike's.";
	int countWords(const char string[]);

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));

	return 0;
}