#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

void txt(float* x, char* operation, float* y);
void logic(float x, char operation, float y);


int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float x, y;
	char oprt;

	while (true) {
		printf("--- Calculator ---\n");
		txt(&x, &oprt, &y);
		printf("| %f | %c | %f |\n", x, oprt, y);
		logic(x, oprt, y);
	}


	return 0;
}


void txt(float* x, char* operation, float* y) {
	printf("The first numder: ");
	scanf("%f", x);
	printf("Arithmetic operation: ");
	scanf("%s", operation);
	printf("The second numeric: ");
	scanf("%f", y);
}

void logic(float x, char operation, float y) {
	if (operation == '+')
		printf("Result: %f\n\n", x + y);
	else if (operation == '-')
		printf("Result: %f\n\n", x - y);
	else if (operation == '*')
		printf("Result: %f\n\n", x * y);
	else if (operation == '/')
		if (y == 0)
			printf("Result: ! Íà íóëü ä³ëèòè íå ìîæíà \n\n!");
		else
			printf("Result: %f\n\n", x / y);
}
