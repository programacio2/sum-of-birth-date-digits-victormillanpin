#include <stdio.h>

int main() {
	int num1;
	int num2;
	int num3;
	printf("Select your birth day: ");
	scanf_s(% d, % num1);
	printf("Select your birth mounth: ");
	scanf_s(% d, &num2);
	printf("Select your birth year: ");
	scanf_s(% d, &num3);
	int result;
	result = num1 + num2 + num3;
	printf("result; %d", result);

};