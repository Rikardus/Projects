#include <stdio.h>
#include <string.h>

int main()
{
	char name[50];

	printf("What is the input string? ");
	scanf("%s", name);

	size_t len = strlen(name);
	
	printf("%s has %zu characters.\n", name, len);

	return 0;
}
