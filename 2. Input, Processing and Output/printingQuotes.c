#include <stdio.h>

int main()
{
	char quote[100], name[50];

	printf("What is the quote? ");
	scanf(" %99[^\n]", quote);

	printf("Who said it? ");
	scanf(" %99[^\n]", name);

	printf("%s says, '%s.'\n", name, quote);

	return 0;
}
