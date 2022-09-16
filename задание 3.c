#include <stdio.h>

#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	float n = 2, b = 333;
	printf("Variant 10, Zaycev Ilya\n");
	printf("Dano:\n%12.0f\n  %10.0f\n         _______\n Otvet:\n         %+012.7f",n, b, n/b);
}