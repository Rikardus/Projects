#include <stdio.h>
#include <string.h>

#define TAX 0.055

int main()
{
    float amount = 0, tax = 0, total = 0;
    char state[20];

    printf("What is the order amount? ");
    if(scanf("%f", &amount) != 1){
	puts("Input a valid amount.");
	while(getchar() != '\n');
	return 1;
    }

    printf("%s", "What is the state? ");
    if(scanf(" %[^\n]", state) != 1){
	puts("Input a valid State.");
	while(getchar() != '\n');
	return 1;
    }

    total = amount;
    
    if(strcmp(state, "WI") == 0){
	printf("The subtotal is $%.2f\n", amount);
	printf("The tax is $%.2f\n", amount * TAX);
	total += amount * TAX;
    }
    
    printf("The total is $%.2f\n", total);
    
    return 0;
}
