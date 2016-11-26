// Programm to use the dictionary lookup program

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};

bool equalStrings(const char s1[], const char s2[])
{
	int i = 0;
	bool isEqual;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
		++i;
	}
	if ( s1[i] == '\0' && s2[i] == '\0')
		isEqual = true;
	else 
		isEqual = false;

	return isEqual;
}

int lookup(const struct entry dictionary[], const char search[], const int entries)
{
	int i;
	bool equalStrings(const char s1[], const char s2[]);

	for (i = 0; i < entries; ++i)
		if ( equalStrings(search, dictionary[i].word) )
			return i;

	return -1;
}

int main(void)
{
	 const struct entry dictionary[100] =
	 {	{ "aardvark", 	"a burrowing African mammal" },
	 	{ "abyss", 		"a bottomless pit" },
	 	{ "acumen",		"mentally sharp" },
	 	{ "agar", 		"a jelly made from seaweed" },
	 	{ "ahoy",		"a nautical call of greeting" },
	 	{ "ajar",		"partially opened" }
	 };

	 char word[10];
	 int entries = 6;
	 int entry;
	 int lookup(const struct entry dictionary[], const char search[], const int entries);
	 printf("Entry word: ");
	 scanf("%14s", word);
	 entry = lookup(dictionary, word, entries);

	 if ( entry != -1)
	 	printf("%s\n", dictionary[entry].definition);
	 else
	 	printf("Sorry, the word %s is not in the dictionary.\n", word);

	 return 0;
}