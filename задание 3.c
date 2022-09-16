#include <stdio.h>

#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	float n = 2;
	printf("Вариант 10, Зайцев Илья\n");
	printf("Дано:\n%12.0f\n  %10.0f\n         _______\n Ответ:\n         %+012.7f",n, 333., n/333.);
}