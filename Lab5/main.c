#include <stdio.h> 
#include <locale.h> // библиотека языков
#define N 10 
int main(void)
{
	setlocale(LC_ALL, "Rus"); // локализация на русский язык

	int x[N]; // массив из N элементов 
	int n = 0; // номер искомой пары
	int t; // переменная сравнения максимальной суммы
	int i = 0;
	int max; // максимальная сумма
	// ввод массива 
	printf("vvedite 10 4isel\n");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &x[i]); // ввод чисел

	}
	max = (x[0] + x[1]); // делаем максимальной суммой сумму первой пары
	i = 1; n = 1; // переходим к следующему числу, т.е. меняем пару и номер пары
	while (i < N) // рассматриваем остальные пары чисел
	{
		if ((t = (x[i] + x[i + 1])) > max) // сравниваем сумму пары с максимальной суммой
		{
			max = t; // запоминаем максимальную сумму
			n = i + 1; // запоминаем номер пары с макс. суммой
		}
		++i; // переходим к следующему числу
	}
	printf("\nНомер пары с макс. суммой: \n%d\n",n);
	return 0;
}
