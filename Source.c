//вариант 12
#include <stdio.h>
#include <locale.h>
#define C 60
int main() 
{
	int min, stol, s1;
	setlocale(LC_ALL, "RUS");
	puts("¬ведите врем€ в минутах");
	scanf_s("%d", &min);
	int sek = C * min;
	puts("¬ведите кол-во столбов");
	scanf_s("%d", &stol);
	puts("¬ведите рассто€ние между столбами в метрах");
	scanf_s("%d", &s1);
	int v = ((stol - 1) * s1)/sek;
	printf("скорость поезда равна %d м/с",v);
}