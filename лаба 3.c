#include <stdio.h>
#include<locale.h>
#define D 2.54
#define I 2.32166
#define G 2.7076

void main()
{
	setlocale(LC_ALL, "RUS");
	/*int a, b;

	puts("Введите число А");
	scanf("%d", &a);

	puts("Введите число В");
	scanf("%d", &b);

	printf("___________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf("-------------------\n");
	printf("|%2d*%-2d|%2d+%-2d|%2d-%-2d|\n", a, b, a, b, a, b);
	printf("-------------------\n");
	printf("|%3d  |%3d  |%3d  |\n", a * b, a + b, a - b);
	printf("-------------------\n");
}*/
//	/*float n, result, res2, resu;
//
//	puts("Введите число для пересчета(с точностью до тысячных)");
//	scanf("%f", &n);
//
//result = n * D;
//	printf("%.3f дюймов = %.5f сантиметров\n", n, n*D);
//res2 = n * I;
//	printf("%.3f испанских дюймов = %.5f сантиметров\n", n, res2);
//resu = n * G;
//	printf("%.3f старолитовских дюймов = %.5f сантиметров\n", n, resu);
//}*/
	int a, b;
	puts("Введиче целое число а");
	scanf("%d", &a);

	puts("Введите целое число в");
	scanf("%d", &b);

	printf("А*В=%i\n", a*b);
	printf("А-В=%i\n", a-b);
	printf("B-A=%i\n", b-a);
	printf("А+В=%i\n", a+b);
	printf("В/А=%i, остаток:%i\n", b/a, b%a);
}