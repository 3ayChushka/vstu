#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int a;

	printf("�������� ����� ��������(�� 10 �� 15)\n");
	scanf("%d", &a);

	if (a == 10) var10();
	if (a == 11) var11();
	if (a == 12) var12();
	if (a == 13) var13();
	if (a == 14) var14();
	if (a == 15) var15();

	return 0;
}
int var10()
{
	double result, v, c;
	c = 299792458;

	printf("������� ���������� ����(� ���, � ��������� �� 50 �� 2000)\n");
	scanf("%lf", &v);

	result = c / v;

	printf("��� �������, ������ %.0lf ���, ����� ����� = %lf ������\n(�� ���� ��� ������ ���� �� ���, � ��, �� ����� ����� = %lf ������)\n", v, result / 1000000000, result);
}
int var11()
{
	double a, b, r;
	double_t G, R;
	G = 6.67e-11;

	printf("������� ����� ������� ���� � ��\n");
	scanf("%lf", &a);

	printf("������� ����� ������� ���� � ��\n");
	scanf("%lf", &b);

	printf("������� ���������� ����� ���� � �\n");
	scanf("%lf", &r);

	R = G * (a * b / pow(r, 2));

	printf("%.13lf", G);

	printf("���� �������������� ����� ������ � ������� %.2lf �� � %.2lf �� ����� %.15lf", a, b, R);
}
int var12()
{
	float c, k, f;

	printf("������� ������� �� �������\n");
	scanf("%f", &c);

	f = c+32;
	k = c+273.15;

	printf("%.2f �������� �� ������� = %.2f �������� �� �������� = %.2f �������� �� ����������", c, k, f);
}
int var13()
{
	float g, e;
	double_t p;

	p = 63241.0770880659;

	printf("������� �������� ����\n");
	scanf("%f", &g);

	e = p*g;

	printf("%f �������� ��� = %f ��������������� ������\n", g, e);
}
int var14()
{
	float m;
	double km;

	printf("������� ������� ����\n");
	scanf("%f", &m);

	km = 1.852 * m;

	printf("%.0f ������� ���� = %.5f ����������\n", m, km);
}
int var15()
{
	int g, m, d;

	printf("������� ����� ����� ���\n");
	scanf("%d", &g);

	m = g * 12;
	d = g * 365;

	printf("%d ����(���) = %d ������� = %d ����\n", g, m, d);
}