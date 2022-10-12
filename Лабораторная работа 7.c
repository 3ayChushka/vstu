#include <stdio.h>
#include <locale.h>
//Лабораторная работа 7
int main()
{
	setlocale(LC_ALL, "RUS");

	zadanie1_2();
	zadanie2();
	kontrolnie_zadachi();
}

int zadanie1_2()
{
	char c;
	
		printf("Введите символ\n");
		scanf("%c", &c);
	
		switch (c)
		{
		case '0':
			printf("Это цифра\n"); break;
		case '1':
			printf("Это цифра\n"); break;
		case '2':
			printf("Это цифра\n"); break;
		case '3':
			printf("Это цифра\n"); break;
		case '4':
			printf("Это цифра\n"); break;
		case '5':
			printf("Это цифра\n"); break;
		case '6':
			printf("Это цифра\n"); break;
		case '7':
			printf("Это цифра\n"); break;
		case '8':
			printf("Это цифра\n"); break;
		case '9':
			printf("Это цифра\n"); break;
		default:
			printf("Это буква\n"); break;
		}
	
		return 0;
}
int zadanie2()
{
	float x, y, z;
	char c;

	printf("Калькулятор\n\n");

	printf("Введите пример\n");
	scanf("%f %c %f", &x, &c, &y);

	switch (c)
	{
	case '+':
		printf("%g %c %g = %g\n", x, c, y, x + y); break;
	case '-':
		printf("%g %c %g = %g\n", x, c, y, x - y); break;
	case '*':
		printf("%g %c %g = %g\n", x, c, y, x * y); break;
	case '/':
		printf("%g %c %g = %g\n", x, c, y, x / y); break;
	}
}
int kontrolnie_zadachi()
{
	int z;

	printf("Выберите номер задания 1-4\n");
	scanf("%d", &z);

	if (z == 1) zadan1();
	else if (z == 2) zadan2();
		else if (z == 3) zadan3();
			else if (z == 4) zadan4();
}

//контрольные примеры:
int zadan1()
{
	int a, b;

	printf("Выберите тип нумерации:\n1-с понедельника\n2-с воскресенья\n");
	scanf("%d", &b);

	printf("Введите номер дня недели\n");
	scanf("%d", &a);

	switch (b)
	{
	case 1:
		switch (a)
		{
		case 1:
			printf("Понедельник\n"); break;
		case 2:
			printf("Вторник\n"); break;
		case 3:
			printf("Среда\n"); break;
		case 4:
			printf("Четверг\n"); break;
		case 5:
			printf("Пятница\n"); break;
		case 6:
			printf("Субота\n"); break;
		case 7:
			printf("Воскресенье\n"); break;
		default:
			printf("Неверное число\n"); break;
		}
	default:
		switch (a)
		{
		case 2:
			printf("Понедельник\n"); break;
		case 3:
			printf("Вторник\n"); break;
		case 4:
			printf("Среда\n"); break;
		case 5:
			printf("Четверг\n"); break;
		case 6:
			printf("Пятница\n"); break;
		case 7:
			printf("Субота\n"); break;
		case 1:
			printf("Воскресенье\n"); break;
		default:
			printf("Неверное число\n"); break;
			break;
		}
	}

	return 0;
}
int zadan2()
{
	int a;
	char b;

	printf("Выберите год:\n1-високосный\n2-не високосный\n");
	scanf("%c", &b);

	printf("Введите номер месяца\n");
	scanf("%d", &a);

	switch (b)
	{
	case 1:
		switch (a)
		{
		case 1:
			printf("31\n"); break;
		case 2:
			printf("29\n"); break;
		case 3:
			printf("31\n"); break;
		case 4:
			printf("30\n"); break;
		case 5:
			printf("31\n"); break;
		case 6:
			printf("30\n"); break;
		case 7:
			printf("31\n"); break;
		case 8:
			printf("31\n"); break;
		case 9:
			printf("30\n"); break;
		case 10:
			printf("31\n"); break;
		case 11:
			printf("30\n"); break;
		case 12:
			printf("31\n"); break;
		default:
			printf("Неверное число\n"); break;
		}
	default:
		switch (a)
		{
		case 1:
			printf("31\n"); break;
		case 2:
			printf("28\n"); break;
		case 3:
			printf("31\n"); break;
		case 4:
			printf("30\n"); break;
		case 5:
			printf("31\n"); break;
		case 6:
			printf("30\n"); break;
		case 7:
			printf("31\n"); break;
		case 8:
			printf("31\n"); break;
		case 9:
			printf("30\n"); break;
		case 10:
			printf("31\n"); break;
		case 11:
			printf("30\n"); break;
		case 12:
			printf("31\n"); break;
		default:
			printf("Неверное число\n"); break;
		}
	}
	getchar();
	return 0;
}
int zadan3()
{
	int a;
	printf("Введите номер месяца\n");
	scanf("%d", &a);

	switch (a)
	{
	case 12:
		printf("Зима\n"); break;
	case 1:
		printf("Зима\n"); break;
	case 2:
		printf("Зима\n"); break;
	case 3:
		printf("Весна\n"); break;
	case 4:
		printf("Весна\n"); break;
	case 5:
		printf("Весна\n"); break;
	case 6:
		printf("Лето\n"); break;
	case 7:
		printf("Лето\n"); break;
	case 8:
		printf("Лето\n"); break;
	case 9:
		printf("Осень\n"); break;
	case 10:
		printf("Осень\n"); break;
	case 11:
		printf("Осень\n"); break;
	default:
		printf("Неверное число\n"); break;
	}
}
int zadan4()
{
	int a;

	printf("Введите число 1-12\n");
	scanf("%d", &a);

	switch (a)
	{
	case '1':
		printf("I\n"); break;
	case '2':
		printf("II\n"); break;
	case '3':
		printf("III\n"); break;
	case '4':
		printf("IV\n"); break;
	case '5':
		printf("V\n"); break;
	case '6':
		printf("VI\n"); break;
	case '7':
		printf("VII\n"); break;
	case '8':
		printf("VIII\n"); break;
	case '9':
		printf("IX\n"); break;
	case '10':
		printf("X\n"); break;
	case 11:
		printf("XI\n"); break;
	case '12':
		printf("XII\n"); break;
	default: printf("Неизвестный символ\n"); break;
	}
}