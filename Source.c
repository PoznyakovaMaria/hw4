//������� 12
#include <stdio.h>
#include <locale.h>
#define C 60
int main() 
{
	int min, stol, s1;
	setlocale(LC_ALL, "RUS");
	puts("������� ����� � �������");
	scanf_s("%d", &min);
	int sek = C * min;
	puts("������� ���-�� �������");
	scanf_s("%d", &stol);
	puts("������� ���������� ����� �������� � ������");
	scanf_s("%d", &s1);
	int v = ((stol - 1) * s1)/sek;
	printf("�������� ������ ����� %d �/�",v);
}