#include <stdio.h>
#include <locale.h>
#include <math.h>
//������������ ������ 6
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

	printf("������� ���\n");
	scanf("%d", &year);

	if (year % 4 == 0) printf("%d ���������� ���\n", year);
	else printf("%d �� ���������� ���\n", year);
	printf("\n\n");
}
int zadanie1_2()
{
	int year;

	printf("������� ���\n");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) printf("%d ���������� ���\n", year);
	else printf("%d �� ���������� ���\n", year);
	printf("\n\n");
}
int zadanie1_4()
{
	int year;

	printf("������� ���\n");
	scanf("%d", &year);

	printf("%d %s ���\n", year, (year % 4 == 0 ? "����������" : "������������"));
	printf("\n\n");
}
int zadanie2()
{
	printf("������� 10\nmin{x/y, |x-y|}\n\n����������� ������:\nx=124,234\ny=43,452\nmin{x/y,|x-y|=2,859109\n\n");
	float x, y, r1, r2;

	printf("������� ������������ ����� �\n");
	scanf("%f", &x);

	printf("������� ������������� ����� �\n");
	scanf("%f", &y);

	printf("\n");

	r1 = x / y;
	r2 = fabs(x - y);

	if (r1 < r2) printf("min{%f/%f,|%f-%f|}\nmin{%f,|%f|}\n�����: %f\n", x, y, x, y, r1, r2, r1);
	else printf("min{%f/%f,|%f-%f|}\nmin{%f,|%f|}\n�����: %f\n", x, y, x, y, r1, r2, r2);

	printf("\n\n");
}
int zadanie3()
{
	printf("������� 10\n\n����������� ������ 1\n�=9\n�=81\n");
	printf("����������� ������ 2\n�=2\n�=0,1\n");

	double x, y;

	printf("������� ����� x\n");
	scanf("%lf", &x);

	printf("x=%lf\ny=%lf", x, (x >= 8 ? pow(x, 2) + x - 9 : 1 / (pow(x, 4) - 6)));
}
int kontrolnie_zadachi()
{
	int z;
	printf("�������� ����� ������� 1, 2, 3, 6\n");
	scanf("%d", &z);

	if (z == 1) z1();
		else if (z == 2) z2();
			else if (z == 3) z3();
				else if (z == 6) z6();
}
//����������� ������:
int z1()
{
	int x, y, z;

	printf("������� ������ ����������� �����\n");
	scanf("%d", &x);

	printf("������� ������ ����������� �����\n");
	scanf("%d", &y);

	printf("%d * %d =\n", x, y);
	scanf("%d", &z);

	if (z == x * y) printf("���������!\n");
	else printf("�����������! %d\n", x * y);

	return 0;
}
int z2()
{
	int a, b, c;

	printf("������� ������ �������\n");
	scanf("%d", &a);

	printf("������� ������ �������\n");
	scanf("%d", &b);

	printf("������� ������ �������\n");
	scanf("%d", &c);

	if (pow(a, 2) == pow(b, 2) + pow(c, 2) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(b, 2) + pow(a, 2))) printf("����������� �������������\n");
	else printf("����������� �� �������������\n");

	return 0;
}
int z3()
{
	int x, y;
	printf("������� ���������� �\n");
	scanf("%d", &x);

	printf("������� ���������� �\n");
	scanf("%d", &y);

	if (x < 0)
	{
		if (y < 0) printf("3 ��������\n");
		else printf("4 ��������\n");
	}
	else
	{
		if (y < 0) printf("2 ��������\n");
		else printf("1 ��������\n");
	}
	if (x == 0 || y == 0) printf("����� ����� �� ���\n");

	printf("\n\n");

	return 0;
}
int z6()
{
	float x;
	int y;
	printf("������� ������������ �����\n");
	scanf("%f", &x);

	printf("� ����� ������� ���������?\n1-� �������\n2-� �������\n");
	scanf("%d", &y);

	if (y == 1)printf("%d\n", (int)x + 1);
	else printf("%d\n", (int)x);
	printf("\n\n");
	return 0;
}