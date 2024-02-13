#include <stdio.h>

#define GALLON 350

int main()
{
    int width = 0;
    int length = 0;
    int sqrFeet = 0;
    float gallonsNeeded = 0;
    
    printf("Input width: ");
    if(scanf("%d", &width) != 1){
	puts("Input a valid number");
	while(getchar() != '\n');
	return 1;
    }

    printf("Input length: ");
    if(scanf("%d", &length) != 1){
	puts("Input a valid number");
	while(getchar() != '\n');
	return 1;
    }

    puts("Gallon of paint cover 350 feet");
    
    sqrFeet = width * length;

    gallonsNeeded = (float) sqrFeet / GALLON;

    if(gallonsNeeded > 1.00){
	gallonsNeeded++;
    }

    printf("You will need to purchase %.0f gallons of paint to cover %d square feet.\n", gallonsNeeded, sqrFeet);

    return 0;
}
