#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int a;

	printf("¬ыберите номер варианта(от 10 до 15)\n");
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

	printf("¬ведите количество герц(в √√ц, в диапазоне от 50 до 2000)\n");
	scanf("%lf", &v);

	result = c / v;

	printf("ѕри частоте, равной %.0lf √√ц, длина волны = %lf метров\n(но если там должны быть не √√ц, а √ц, то длина волны = %lf метров)\n", v, result / 1000000000, result);
}
int var11()
{
	double a, b, r;
	double_t G, R;
	G = 6.67e-11;

	printf("¬ведите массу первого тела в кг\n");
	scanf("%lf", &a);

	printf("¬ведите массу второго тела в кг\n");
	scanf("%lf", &b);

	printf("”кажите рассто€ние между ними в м\n");
	scanf("%lf", &r);

	R = G * (a * b / pow(r, 2));

	printf("%.13lf", G);

	printf("—ила взаимодействи€ между телами с массами %.2lf кг и %.2lf кг равна %.15lf", a, b, R);
}
int var12()
{
	float c, k, f;

	printf("¬ведите градусы по ÷ельсию\n");
	scanf("%f", &c);

	f = c+32;
	k = c+273.15;

	printf("%.2f градусов по ÷ельсию = %.2f градусов по  ельвину = %.2f градусов по ‘аренгейту", c, k, f);
}
int var13()
{
	float g, e;
	double_t p;

	p = 63241.0770880659;

	printf("¬ведите световые года\n");
	scanf("%f", &g);

	e = p*g;

	printf("%f световых лет = %f астрономических единиц\n", g, e);
}
int var14()
{
	float m;
	double km;

	printf("¬ведите морские мили\n");
	scanf("%f", &m);

	km = 1.852 * m;

	printf("%.0f морских миль = %.5f километров\n", m, km);
}
int var15()
{
	int g, m, d;

	printf("¬ведите целое число лет\n");
	scanf("%d", &g);

	m = g * 12;
	d = g * 365;

	printf("%d года(лет) = %d мес€цев = %d дней\n", g, m, d);
}