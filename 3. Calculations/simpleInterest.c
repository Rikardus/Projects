#include <stdio.h>

int main()
{
    float principal = 0;
    float interest = 0;
    int year = 0;

    printf("Enter the principal: ");
    if(scanf("%f", &principal) != 1){
	puts("Enter a valid number");
	while(getchar() != '\n');
	return 1;
    }

    printf("Enter the rate of interest: ");
    if(scanf("%f", &interest) != 1){
	puts("Enter a valid number");
	while(getchar() != '\n');
	return 1;
    }
    
    printf("Enter the number of year: ");
    if(scanf("%d", &year) != 1){
	puts("Enter a valid number");
	while(getchar() != '\n');
	return 1;
    }

    printf("\nAfter %d years at %.2f%%, the investment will", year, interest);

    interest /= 100;
    principal += principal * interest * year;

    printf(" be worth $%.2f.\n", principal);

    return 0;
}
