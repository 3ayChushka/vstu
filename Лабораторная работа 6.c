#include <stdio.h>
#include <locale.h>
#include <math.h>
//Лабораторная работа 6
int main()
{
	setlocale(LC_ALL, "RUS");

	zadanie1();
	zadanie1_2();
	zadanie1_4();
	zadanie2();
	zadanie3();
	kontrolnie_zadachi();
	
	return 0;
}

int zadanie1()
{
	int year;

	printf("Введите год\n");
	scanf("%d", &year);

	if (year % 4 == 0) printf("%d високосный год\n", year);
	else printf("%d не високосный год\n", year);
	printf("\n\n");
}
int zadanie1_2()
{
	int year;

	printf("Введите год\n");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) printf("%d високосный год\n", year);
	else printf("%d не високосный год\n", year);
	printf("\n\n");
}
int zadanie1_4()
{
	int year;

	printf("Введите год\n");
	scanf("%d", &year);

	printf("%d %s год\n", year, (year % 4 == 0 ? "високосный" : "невисокосный"));
	printf("\n\n");
}
int zadanie2()
{
	printf("Вариант 10\nmin{x/y, |x-y|}\n\nКонтрольный пример:\nx=124,234\ny=43,452\nmin{x/y,|x-y|=2,859109\n\n");
	float x, y, r1, r2;

	printf("Введите вещественное число х\n");
	scanf("%f", &x);

	printf("Введите ввещественное число у\n");
	scanf("%f", &y);

	printf("\n");

	r1 = x / y;
	r2 = fabs(x - y);

	if (r1 < r2) printf("min{%f/%f,|%f-%f|}\nmin{%f,|%f|}\nОтвет: %f\n", x, y, x, y, r1, r2, r1);
	else printf("min{%f/%f,|%f-%f|}\nmin{%f,|%f|}\nОтвет: %f\n", x, y, x, y, r1, r2, r2);

	printf("\n\n");
}
int zadanie3()
{
	printf("Вариант 10\n\nКонтрольный пример 1\nх=9\nу=81\n");
	printf("Контрольный пример 2\nх=2\nу=0,1\n");

	double x, y;

	printf("Введите число x\n");
	scanf("%lf", &x);

	printf("x=%lf\ny=%lf", x, (x >= 8 ? pow(x, 2) + x - 9 : 1 / (pow(x, 4) - 6)));
}
int kontrolnie_zadachi()
{
	int z;
	printf("Ввыерите номер задания 1, 2, 3, 6\n");
	scanf("%d", &z);

	if (z == 1) z1();
		else if (z == 2) z2();
			else if (z == 3) z3();
				else if (z == 6) z6();
}
//Контрольные задачи:
int z1()
{
	int x, y, z;

	printf("Введите первое однозначное число\n");
	scanf("%d", &x);

	printf("Введите второе однозначное число\n");
	scanf("%d", &y);

	printf("%d * %d =\n", x, y);
	scanf("%d", &z);

	if (z == x * y) printf("Правильно!\n");
	else printf("Неправильно! %d\n", x * y);

	return 0;
}
int z2()
{
	int a, b, c;

	printf("Введите первую сторону\n");
	scanf("%d", &a);

	printf("Введите вторую сторону\n");
	scanf("%d", &b);

	printf("Введите третью сторону\n");
	scanf("%d", &c);

	if (pow(a, 2) == pow(b, 2) + pow(c, 2) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(b, 2) + pow(a, 2))) printf("Треугольник прямоугольный\n");
	else printf("Треугольник не прямоугольный\n");

	return 0;
}
int z3()
{
	int x, y;
	printf("Введите координату х\n");
	scanf("%d", &x);

	printf("Введите координату у\n");
	scanf("%d", &y);

	if (x < 0)
	{
		if (y < 0) printf("3 четверть\n");
		else printf("4 четверть\n");
	}
	else
	{
		if (y < 0) printf("2 четверть\n");
		else printf("1 четверть\n");
	}
	if (x == 0 || y == 0) printf("Точка лежит на оси\n");

	printf("\n\n");

	return 0;
}
int z6()
{
	float x;
	int y;
	printf("Введите вещественное число\n");
	scanf("%f", &x);

	printf("В какую сторону округлить?\n1-в большую\n2-в меньшую\n");
	scanf("%d", &y);

	if (y == 1)printf("%d\n", (int)x + 1);
	else printf("%d\n", (int)x);
	printf("\n\n");
	return 0;
}