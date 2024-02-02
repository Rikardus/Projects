#include <stdio.h>

#define CONVERSION 0.09290304

int main(){
    int length, width;
    float squareFeet, squareMeter;

    printf("What is the length of the room in feet? ");
    if(scanf("%d", &length) != 1 || length < 0){
	puts("Enter a valid number");
	while(getchar() != '\n');
	return 1;
    }
    
    printf("What is the width of the room in feet? ");
    if(scanf("%d", &width) != 1 || width < 0){
	puts("Enter a valid number");
	while(getchar() != '\n');
	return 1;
    }

    squareFeet = length * width;
    squareMeter = squareFeet * CONVERSION;

    if(squareFeet > 0){
	printf("You entered dimensions of %d feet by %d feet\n", length, width);
    
	puts("The area is");
	printf("%.3f square feet\n", squareFeet);
	printf("%.3f square meters\n", squareMeter);
    }

    return 0;
}
