#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, sum, sub, mult, div;
	char val1[6], val2[6];

	printf("What is the first number? ");
	scanf("%s", val1);

	printf("What is the second number? ");
	scanf("%s", val2);
	
	num1 = atoi(val1);
	num2 = atoi(val2);
	
	sum = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;

	printf("%d + %d = %d\n", num1, num2, sum);
	printf("%d - %d = %d\n", num1, num2, sub);
	printf("%d * %d = %d\n", num1, num2, mult);
	printf("%d / %d = %d\n", num1, num2, div);

	return 0;
}
