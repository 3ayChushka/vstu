#include <locale.h>

#include <stdio.h>

void main()

{
	setlocale(LC_ALL, "RUS"); 

    puts("       /\\      ");
    puts("      /  \\     ");
    puts("     |    |     ");
    puts("     |    |     ");
    puts("     |    |     ");
    puts("     |    |     ");
    puts("    / |  | \\   ");
    puts("   /  |  |  \\  ");
    puts("  /   |  |   \\ ");
}

#define _CRT_SECURE_NO_WARNINGS
#define e 2.71828
#include <stdio.h>
#include <locale.h>
#include <math.h>

void cs(int a){
    if (a>10)printf("X");
    
    switch (a%10)
	{
	case 1:
		printf("I"); break;
	case 2:
		printf("II"); break;
	case 3:
		printf("III"); break;
	case 4:
		printf("IV"); break;
	case 5:
		printf("V"); break;
	case 6:
		printf("VI"); break;
	case 7:
		printf("VII"); break;
	case 8:
		printf("VIII"); break;
	case 9:
		printf("IX"); break;
	case 10:
		printf("X"); break;
	default:
		printf("Неверное число\n\n"); break;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");

	int a;
	float x, y, z;
	char c;

	printf("Введите пример\n");
	scanf("%f %c %f", &x, &c, &y);

    switch (c)
	{
	case '+':
		a = x + y; break;
	case '-':
		a =  x - y;break;
	case '*':
	     a = x * y;break;
	case '/':
	     a = x / y;break;
	}

	cs(x);
	printf("%c",c);
	cs(y);
	printf("=");
	cs(a);
    
	
}
