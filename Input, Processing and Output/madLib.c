#include <stdio.h>

int main()
{
	char noun[20], verb[20], adjective[20], adverb[20];

	printf("Enter a noun: ");
	scanf("%s", noun);
	
	printf("Enter a verb: ");
	scanf("%s", verb);

	printf("Enter an adjective: ");
	scanf("%s", adjective);

	printf("Enter an adverb: ");
	scanf("%s", adverb);

	printf("Do you %s your %s %s %s? Thst's hilarious!\n", verb, adjective, noun, adverb);

	return 0;
}
