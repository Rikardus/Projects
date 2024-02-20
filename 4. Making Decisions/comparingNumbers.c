#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the first number: ");
    scanf("%d", &num2);
    printf("Enter the first number: ");
    scanf("%d", &num3);

    largest = num1;
    
    if(num1 == num2 == num3){
	puts("All the numbers are equal");
    }

    if(num2 > largest){
	largest = num2;
    }
    if(num3 > largest){
	largest = num3;
    }

    printf("\nThe largest number is %d\n", largest);
    

    return 0;
}
