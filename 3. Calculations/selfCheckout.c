#include <stdio.h>

#define TAX 0.055

int main()
{
    int item = 0;
    int quantity = 0;
    float subtotal = 0;
    float taxAmount = 0;
    float total = 0;
    int counter = 1;

    puts("Type 0 to end/terminate");

    while(1){
	printf("Enter the price of item %d: ", counter);
	if(scanf("%d", &item) != 1 || item < 0){
	    puts("Enter a Valid Number");
	    while(getchar() != '\n');
	    continue;
	}

	printf("Enter the quantity of item quantity %d: ", counter);
	if(scanf("%d", &quantity) != 1 || quantity < 0){
	    puts("Enter a Valid Number");
	    while(getchar() != '\n');
	    continue;
	}

	if(item <= 0 || quantity <= 0){
	    break;
	}

	int tempSubtotal;
	
	tempSubtotal = item * quantity;
	subtotal += (float)tempSubtotal;
	tempSubtotal = 0;

	taxAmount = subtotal * TAX;
	total = subtotal + taxAmount;
	
	counter++;
    }

    printf("\nSubtotal: $%.2f\n", subtotal);
    printf("Tax: $%.2f\n", taxAmount);
    printf("Total: $%.2f\n", total);
    
    return 0;
}
