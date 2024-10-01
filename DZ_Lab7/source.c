#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	printf("¬ведите год:\n");
	scanf("%d", &b);
	printf("¬ведите номер мес€ца от 1 до 12:\n");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		c = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		c = 30;
		break;
	case 2: //February
		if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0)) c = 29;
		else c = 28;
		break;
	default:
		printf("¬ведЄн некорректный номер. ѕовторите ввод\n");
	}
	printf(" оличество дней в мес€це %d %d года: %d", a, b, c);
}