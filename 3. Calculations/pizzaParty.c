#include <stdio.h>

#define SLICES_IN_PIZZA 8

int main()
{
    int people = 0;
    int pizzas = 0;
    int pieces = 0;
    int leftover = 0;

    printf("How many people? ");
    if(scanf("%d", &people) != 1){
	puts("Enter a valid number");
	while(getchar() != '\n');
	return 1;
    }

    printf("How many pizzas do you have? ");
    if(scanf("%d", &pizzas) != 1){
	puts("Enter a valid number");
	while(getchar() != '\n');
	return 1;
    }

    pieces = (pizzas * SLICES_IN_PIZZA) / people;
    leftover = (pizzas * SLICES_IN_PIZZA) % people;

    printf("\n%d people with %d pizzas\n", people, pizzas);
    printf("Each person gets %d pieces of pizza\n", pieces);
    printf("There are %d leftover pieces\n", leftover);
    
    return 0;
}
