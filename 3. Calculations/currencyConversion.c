#include <stdio.h>

int main()
{
    float euro;
    float dollars;
    float exchangeRate;

    printf("How many euros are you exchanging? ");
    if(scanf("%f", &euro) != 1){
	puts("input a valid number");
	while(getchar() != '\n');
	return 1;
    }

    printf("What is the exchange rate? ");
    if(scanf("%f", &exchangeRate) != 1){
	puts("input a valid number");
	while(getchar() != '\n');
	return 1;
    }

    dollars = euro * exchangeRate / 100;

    printf("\n%.2f euros at an exchange rate of %.2f is\n%.2f U.S. dollars\n", euro, exchangeRate, dollars);

    return 0;
}
