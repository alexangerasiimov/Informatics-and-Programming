#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() {
	setlocale(LC_ALL, "Russian");

	float a, h;
	printf("������� ��������� ������������: \n  a = ");
	scanf_s("%f", &a);
	printf("������� ������ ������������: \n  h = ");
	scanf_s("%f", &h);
	
	float S;
	S = 0.5 * a * h;
	printf("������� ������������ �����: \n S = %f", S);

	
	float b,c;
	printf(" \n ������� ������ ������� ��������������: \n  b = ");
	scanf_s("%f", &b);
	printf(" ������� ������ ������� ��������������: \n  c = ");
	scanf_s("%f", &c);

	float S1;
	S1 = b * c;
	printf("������� ��������������: \n S1 = %f", S1);

	float  r;
	

	printf(" \n ������� ������ ����������: \n  r = ");
	scanf_s("%f", &r);

	float S2;
	
	S2 = M_PI * r * r;
	printf("������� ����������: \n S2 = %f", S2);

	return 0;
}