#include <stdio.h>
#include<locale.h>
#define D 2.54
#define I 2.32166
#define G 2.7076

void main()
{
	setlocale(LC_ALL, "RUS");
	/*int a, b;

	puts("������� ����� �");
	scanf("%d", &a);

	puts("������� ����� �");
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
//	puts("������� ����� ��� ���������(� ��������� �� ��������)");
//	scanf("%f", &n);
//
//result = n * D;
//	printf("%.3f ������ = %.5f �����������\n", n, n*D);
//res2 = n * I;
//	printf("%.3f ��������� ������ = %.5f �����������\n", n, res2);
//resu = n * G;
//	printf("%.3f �������������� ������ = %.5f �����������\n", n, resu);
//}*/
	int a, b;
	puts("������� ����� ����� �");
	scanf("%d", &a);

	puts("������� ����� ����� �");
	scanf("%d", &b);

	printf("�*�=%i\n", a*b);
	printf("�-�=%i\n", a-b);
	printf("B-A=%i\n", b-a);
	printf("�+�=%i\n", a+b);
	printf("�/�=%i, �������:%i\n", b/a, b%a);
}