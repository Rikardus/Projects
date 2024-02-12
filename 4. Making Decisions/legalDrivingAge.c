#include <stdio.h>

int main()
{
    int age;
    const char *legal = "You are old enough to legally drive.";
    const char *notLegal = "You are not old enough to legally drive.";
    
    printf("What is your age? ");
    if(scanf("%d", &age) != 1 || age <= 0){
	puts("Enter a valid age.");
	while(getchar() != '\n');
	return 1;
    }

    age >= 18 ? puts(legal) : puts(notLegal);

    return 0;
}
