#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	printf("������� ������ �����: \n  a = ");
	scanf_s("%f", &a);
	printf("������� ������ �����: \n  b = ");
	scanf_s("%f", &b);
	printf("������� ������ �����: \n  c = ");
	scanf_s("%f", &c);

	float S;
	S = (a + b + c) / 3;
	printf("������� �������������� �����:  S = %f \n", S);

	float S1;
	S1 = ((a * a) + (b * b) + (c * c)) / 3;
	printf("������� ��������� �����:  S1 = %f \n ", S1);

	float S2;
	S2 = (abs(a) + abs(b) + abs(c)) / 3;
	printf("������� ������� �����:  S2 = %f \n", S2);

	float S3;
	S3 = (sqrt(a) + sqrt(b) + sqrt(c)) / 3;
	printf("������� ������ �����:  S3 = %f \n", S3);









}