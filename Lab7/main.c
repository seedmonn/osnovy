#include <stdio.h> 
#include <conio.h> 
#include <locale.h> 
int main()
{
	int x = 0;
	int temp = 0;
	int mask = 0b0;
	int d = 32;
	unsigned int res_x = 0;

	setlocale(LC_ALL, "Rus");
	printf("??????? ??????? ?: ");
	scanf_s("%x", &x);
	res_x = (unsigned int)x;



	printf("????: ");
	for (int i = 0; i < sizeof(res_x) * 8; i++)
	{
		temp = res_x;
		res_x <<= 1;
		res_x >>= 1;

		if (res_x == temp)
		{
			printf("0");
			mask = mask | (0 <<(d - 8 + i % 8));
		}
		else
		{
			printf("1");
			mask = mask | (1 <<(d - 8 + i % 8));
		}
		if ((i + 1) % 8 == 0)
		{
			printf(" ");
			d = d - 8;
		}

		res_x <<= 1;

	}

	x = mask;

	res_x = (unsigned int)x;
	printf("\n?????:");
	for (int i = 0; i < sizeof(res_x) * 8; i++)
	{
		temp = res_x;
		res_x <<= 1;
		res_x >>= 1;

		if (res_x == temp)
			printf("0");

		else
			printf("1");

		if ((i + 1) % 8 == 0)
			printf(" ");

		res_x <<= 1;
	}


	return 0;
}
