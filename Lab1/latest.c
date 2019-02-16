#include <stdio.h>
#include <math.h>
#define pi 3.14 // Объявление константы
int main()
{
	// Объявление переменных
	float H; // Высота конуса
	float R; // Нижний радиус конуса (основание)
	float r; // Верхний радиус конуса
	float V; // Объем усеченного конуса
	float D; // Высота отрезанной части
	printf("R =");
	scanf("%f", &R); // Ввод с клавиатуры значения переменной R
	printf("r =");
	scanf("%f", &r); // Ввод с клавиатуры значения переменной r
	printf("h =");
	scanf("%f" , &H); // Ввод с клавиатуры значения переменной h
	r = (R * D) / H;
	V =(pow(R,2) + (R * r) + pow(r,2)) * 1/3 * (H-D) * pi; // Формула вычисления объема усеченного конуса
	printf("V = %.2f\n",V); // Вывод ответа
	return 0;
}
