#include <stdio.h>
#define YES 1
#define NO 0
void main(void)
{
	int c; // текущий символ
	int prev_c; // предыдущий символ
	int flag; // две буквы подряд
	int found; // не слово
	int cnt; // счётчик
	cnt = 0;
	flag = NO;
	found = NO;
	prev_c = 1; // просто потому что 1
	printf("Enter some words:\n");
	while ((c = getchar()) != EOF)
	{
		if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c != ' ' && c != '.' && c != ',' && c != '\n' && c != '\0' && c != '\t')) // проверка на не слово
		{
			found = YES;
		}
		else
		{
			if (c == prev_c && (c != ' ' && c != '.' && c != ',' && c != '\n' && c != '\0' && c != '\t')) // условие
			{
				flag = YES;
			}
		}
		if (c == ' ' || c == '.' || c == '\n' || c == ',' || c == '\t')
		{
			if (flag == YES &&  found == NO)
			{
				++cnt;
			}
			flag = NO;
			found = NO;
		}
		prev_c = c;

	}
	printf("Result: %d\n", cnt);
	return 0;
}
