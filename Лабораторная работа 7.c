#include <stdio.h>
#include <locale.h>
//������������ ������ 7
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
	
		printf("������� ������\n");
		scanf("%c", &c);
	
		switch (c)
		{
		case '0':
			printf("��� �����\n"); break;
		case '1':
			printf("��� �����\n"); break;
		case '2':
			printf("��� �����\n"); break;
		case '3':
			printf("��� �����\n"); break;
		case '4':
			printf("��� �����\n"); break;
		case '5':
			printf("��� �����\n"); break;
		case '6':
			printf("��� �����\n"); break;
		case '7':
			printf("��� �����\n"); break;
		case '8':
			printf("��� �����\n"); break;
		case '9':
			printf("��� �����\n"); break;
		default:
			printf("��� �����\n"); break;
		}
	
		return 0;
}
int zadanie2()
{
	float x, y, z;
	char c;

	printf("�����������\n\n");

	printf("������� ������\n");
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

	printf("�������� ����� ������� 1-4\n");
	scanf("%d", &z);

	if (z == 1) zadan1();
	else if (z == 2) zadan2();
		else if (z == 3) zadan3();
			else if (z == 4) zadan4();
}

//����������� �������:
int zadan1()
{
	int a, b;

	printf("�������� ��� ���������:\n1-� ������������\n2-� �����������\n");
	scanf("%d", &b);

	printf("������� ����� ��� ������\n");
	scanf("%d", &a);

	switch (b)
	{
	case 1:
		switch (a)
		{
		case 1:
			printf("�����������\n"); break;
		case 2:
			printf("�������\n"); break;
		case 3:
			printf("�����\n"); break;
		case 4:
			printf("�������\n"); break;
		case 5:
			printf("�������\n"); break;
		case 6:
			printf("������\n"); break;
		case 7:
			printf("�����������\n"); break;
		default:
			printf("�������� �����\n"); break;
		}
	default:
		switch (a)
		{
		case 2:
			printf("�����������\n"); break;
		case 3:
			printf("�������\n"); break;
		case 4:
			printf("�����\n"); break;
		case 5:
			printf("�������\n"); break;
		case 6:
			printf("�������\n"); break;
		case 7:
			printf("������\n"); break;
		case 1:
			printf("�����������\n"); break;
		default:
			printf("�������� �����\n"); break;
			break;
		}
	}

	return 0;
}
int zadan2()
{
	int a;
	char b;

	printf("�������� ���:\n1-����������\n2-�� ����������\n");
	scanf("%c", &b);

	printf("������� ����� ������\n");
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
			printf("�������� �����\n"); break;
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
			printf("�������� �����\n"); break;
		}
	}
	getchar();
	return 0;
}
int zadan3()
{
	int a;
	printf("������� ����� ������\n");
	scanf("%d", &a);

	switch (a)
	{
	case 12:
		printf("����\n"); break;
	case 1:
		printf("����\n"); break;
	case 2:
		printf("����\n"); break;
	case 3:
		printf("�����\n"); break;
	case 4:
		printf("�����\n"); break;
	case 5:
		printf("�����\n"); break;
	case 6:
		printf("����\n"); break;
	case 7:
		printf("����\n"); break;
	case 8:
		printf("����\n"); break;
	case 9:
		printf("�����\n"); break;
	case 10:
		printf("�����\n"); break;
	case 11:
		printf("�����\n"); break;
	default:
		printf("�������� �����\n"); break;
	}
}
int zadan4()
{
	int a;

	printf("������� ����� 1-12\n");
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
	default: printf("����������� ������\n"); break;
	}
}