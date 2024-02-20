#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;
    char month[20];
    
    printf("Please enter the number of the month: ");
    scanf("%d", &num);

    switch(num){
    case 1:
	strcpy(month, "January");
	break;
    case 2:
	strcpy(month, "February");
	break;
    case 3:
	strcpy(month, "March");
	break;
    case 4:
	strcpy(month, "April");
	break;
    case 5:
	strcpy(month, "May");
	break;
    case 6:
	strcpy(month, "June");
	break;
    case 7:
	strcpy(month, "July");
	break;
    case 8:
	strcpy(month, "August");
	break;
    case 9:
	strcpy(month, "September");
	break;
    case 10:
	strcpy(month, "October");
	break;
    case 11:
	strcpy(month, "November");
	break;
    case 12:
	strcpy(month, "December");
	break;
    }

    printf("The name of the month is %s\n", month);

    return 0;
}
