#include <stdio.h>

int main()
{
    float c = 0.0;
    float f = 0.0;
    char input[1];

    puts("Press C to convert from Fahrenheit to Celsius.");
    puts("Press F to convert from Celsius to Fahrenheit.");
    scanf("%c", input);
	  
    switch(input[0]){
    case 'C':
	puts("You choose to convert from Fahrenheit to Celsius.");
	printf("Please enter the  temperature in Fahrenheit: ");
	scanf("%f", &f);
	c = (5.0 / 9.0)*(f - 32.0);
	printf("The temperature in Celsius is %.2f\n", c);
	break;
    case 'F':
	puts("You choose to convert from Celsius to Fahrenheit.");
	printf("Please enter the  temperature in Celsius: ");
	scanf("%f", &c);
	f = (c * 9.0 / 5.0) + 32.0;
	printf("The temperature in Fahrenheit is %.2f.\n", f);
	break;
    }

    return 0;
}
