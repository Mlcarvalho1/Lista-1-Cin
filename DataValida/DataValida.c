#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int day, month, year, isLeapYear = 0, isDateValid = 1;

	scanf("%d%d%d", &day, &month, &year);

	if(year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0)) {
		isLeapYear = 1;
	}

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if(day > 31 || day < 1) {
			isDateValid = 0;
		}
		break;
	case 2:
		if((!isLeapYear && month == 2 && day > 28) || (isLeapYear && month == 2 && day > 29) || day < 1) {
			isDateValid = 0;
		}
		break;
	default:
		if(day > 30 || day < 1) {
			isDateValid = 0;
		}
		break;
	}


	if(month < 1 || month > 12) {
		isDateValid = 0;
	}

	if(year < 1900 || year > 2100) {
		isDateValid = 0;
	}

	isDateValid ? printf("valida") : printf("invalida");

	return 0;
}