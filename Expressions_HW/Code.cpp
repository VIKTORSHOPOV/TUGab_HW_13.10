#include <iostream>
#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define e 2.71828
// Page 1 Expressions Image -> https://ctrl.vi/i/8gGAzKlK4
// Page 2 Expressions Image -> https://ctrl.vi/i/9XMU8cxgt

int main()
{
	puts("Enter the index of the Expression to be solved for (1 - 20), 0 to Exit: ");
	int index;
	float result = 0.0;
	scanf_s("%d", &index);
	switch (index)
	{
	case 0:
		puts("Exiting the program... ");
		break;
	case 1:
		puts("(sqrt(sqrt(pow(a1, 3))) + (pow(x1 + 5, 3))) / abs(a1)");
		printf("Enter Values for A and X separated by a space: ");
		float a1, x1;
		scanf_s("%f %f", &a1, &x1);
		result = (sqrt(sqrt(pow(a1, 3))) + (pow(x1 + 5, 3))) / abs(a1);
		break;
	case 2:
		puts("(pow((x2 + y2) * (x2 - y2), -5) / (2 * x2))");
		printf("Enter Values for X and Y separated by a space: ");
		float x2, y2;
		scanf_s("%f %f", &x2, &y2);
		result = (pow((x2 + y2) * (x2 - y2), -5) / (2 * x2));
		break;
	case 3:
		puts("sqrt(x3 * y3 - 8 + y3 - 8 * pow(x3, 3))");
		printf("Enter Values for X and Y separated by a space: ");
		float x3, y3;
		scanf_s("%f %f", &x3, &y3);
		result = sqrt(x3 * y3 - 8 + y3 - 8 * pow(x3, 3));
		break;
	case 4:
		puts("(pow(x4, -(1 / 3)) * pow(x4, 2)) / (2 * x4 - 1)");
		printf("Enter Value for X: ");
		float x4, y4;
		scanf_s("%f %f", &x4, &y4);
		result = (pow(x4, -(1 / 3)) * pow(x4, 2)) / (2 * x4 - 1);
		break;
	case 5:
		puts("1 / (sqrt(pow(5, 3)) + 2)");
		printf("No Value input needed.\n");
		result = 1 / (sqrt(pow(5, 3)) + 2);
		break;
	case 6:
		puts("(pow(x6, 2) - 6 * x6 + 9) / (pow(x6, 4) + 2 * pow(x6, 2))");
		printf("Enter Value for X: ");
		float x6;
		scanf_s("%f", &x6);
		result = (pow(x6, 2) - 6 * x6 + 9) / (pow(x6, 4) + 2 * pow(x6, 2));
		break;
	case 7:
		puts("sqrt(x7 - 2) / (pow(x7, 3) + 8 * x7 - 2)");
		printf("Enter Value for X: ");
		float x7;
		scanf_s("%f", &x7);
		result = sqrt(x7 - 2) / (pow(x7, 3) + 8 * x7 - 2);
		break;
	case 8:
		puts("5 + ((2 * pow(x8, 3) - 8 * x8) / sqrt(x8))");
		printf("Enter Value for X: ");
		float x8;
		scanf_s("%f", &x8);
		result = 5 + ((2 * pow(x8, 3) - 8 * x8) / sqrt(x8));
		break;
	case 9:
		puts("pow(x9, 2) - 4 * x9 - 5");
		printf("Enter Value for X: ");
		float x9;
		scanf_s("%f", &x9);
		result = pow(x9, 2) - 4 * x9 - 5;
		break;
	case 10:
		puts("(x10 / (pow(x10, 2) - 4)) / ((x10 - 1) / pow(x10 + 5, 2))");
		printf("Enter Value for X: ");
		float x10;
		scanf_s("%f", &x10);
		result = (x10 / (pow(x10, 2) - 4)) / ((x10 - 1) / pow(x10 + 5, 2));
		break;
	case 11:
		puts("sqrt((pow(a11, 2) + 4) / 2 * a11)");
		printf("Enter Value for A: ");
		float a11;
		scanf_s("%f", &a11);
		result = sqrt((pow(a11, 2) + 4) / 2 * a11);
		break;
	case 12:
		puts("(pow(a12, 2) - b12 + 1) / (pow(b12, 3) + 2 * pow(a12, 3))");
		printf("Enter Values for A and B separated by a space: ");
		float a12, b12;
		scanf_s("%f %f", &a12, &b12);
		result = (pow(a12, 2) - b12 + 1) / (pow(b12, 3) + 2 * pow(a12, 3));
		break;
	case 13:
		puts("5 / (pow(x13, 5) - 3 * sqrt(2 * x13))");
		printf("Enter Value for X: ");
		float x13;
		scanf_s("%f", &x13);
		result = 5 / (pow(x13, 5) - 3 * sqrt(2 * x13));
		break;
	case 14:
		puts("((3 * x14 - 1) / (pow(x14, 2) - 4)) / (1 / (x14 - 2)");
		printf("Enter Value for X: ");
		float x14;
		scanf_s("%f", &x14);
		result = ((3 * x14 - 1) / (pow(x14, 2) - 4)) / (1 / (x14 - 2));
		break;
	case 15:
		puts("(4 * pow(x15, 2) - 5 * x15 + 10) / (pow(x15, 2) - 4)");
		printf("Enter Value for X: ");
		float x15;
		scanf_s("%f", &x15);
		result = (4 * pow(x15, 2) - 5 * x15 + 10) / (pow(x15, 2) - 4);
		break;
	case 16:
		puts("(3 * x16 - 1) / ((pow(x16, 2) - 4) * (pow(x16, 2) + 4))");
		printf("Enter Value for X: ");
		float x16;
		scanf_s("%f", &x16);
		result = (3 * x16 - 1) / ((pow(x16, 2) - 4) * (pow(x16, 2) + 4));
		break;
	case 17:
		puts("pow(pow(x17, 2) + y17 / 2, -3) + pow(e, sqrt(2 * x17 + y17))");
		printf("Enter Values for X and Y separated by a space: ");
		float x17, y17;
		scanf_s("%f %f", &x17, &y17);
		result = pow(pow(x17, 2) + y17 / 2, -3) + pow(e, sqrt(2 * x17 + y17));
		break;
	case 18:
		puts("(a18 + sqrt(pow(b18, 2) + pow(e, a18 + b18)) / (1 + log(b18)))");
		printf("Enter Values for A and B separated by a space: ");
		float a18, b18;
		scanf_s("%f %f", &a18, &b18);
		result = (a18 + sqrt(pow(b18, 2) + pow(e, a18 + b18)) / (1 + log(b18)));
		break;
	case 19:
		puts("(sin(alpha19 + beta19) * sin(alpha19 - beta19)) / (pow(cos(alpha19), 2) * pow(cos(beta19), 2))");
		printf("Enter Values for Alpha and Beta separated by a space: ");
		float alpha19, beta19;
		scanf_s("%f %f", &alpha19, &beta19);
		result = (sin(alpha19 + beta19) * sin(alpha19 - beta19)) / (pow(cos(alpha19), 2) * pow(cos(beta19), 2));
		break;
	case 20:
		puts("acos(sqrt(1 - pow(a20, 2)) + asin(a20 / (sqrt(1 + pow(a20, 2))))");
		printf("Enter Value for A: ");
		float a20;
		scanf_s("%f", &a20);
		result = acos(sqrt(1 - pow(a20, 2)) + asin(a20 / (sqrt(1 + pow(a20, 2)))));
		break;
	default:
		puts("Invalid Input, Program will now Exit...");
		break;
	}
	printf("Result = %.3f", result);
}
