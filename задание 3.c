#include <stdio.h>

#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	float n = 2;
	printf("������� 10, ������ ����\n");
	printf("����:\n%12.0f\n  %10.0f\n         _______\n �����:\n         %+012.7f",n, 333., n/333.);
}