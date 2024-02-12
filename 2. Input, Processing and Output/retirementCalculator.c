#include <stdio.h>
#include <time.h>

int main()
{
	int age, retire_age, years_left, date_retirement, date;

	time_t currentTime;
	struct tm *localTime;

	time(&currentTime);
	localTime = localtime(&currentTime);

	printf("What is your current age? ");
	scanf("%d", &age);

	printf("At what age would you like to retire? ");
	scanf("%d", &retire_age);

	years_left = retire_age - age;
	date = localTime->tm_year + 1900;
	date_retirement = (localTime->tm_year + 1900) + years_left;
	
	printf("\nYou have %d years left until you can retire.\n", years_left);
	printf("It's %04d, so you can retire in %04d\n", date, date_retirement);

	return 0;
}
