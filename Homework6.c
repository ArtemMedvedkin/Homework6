#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int zd3();

int main() {
	setlocale(LC_CTYPE, ".UTF-8");

	zd3();

	return 0;
}

int zd3() {

	int years;

	puts("Введите год:");

	scanf("%d", &years);

	if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0))
		printf("%d - 366 дней в году\n", years);
	else
		printf("%d - 365 дней в году\n", years);

	return 0;
}