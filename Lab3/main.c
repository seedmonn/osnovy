#include <stdio.h>
#define YES 1
#define NO 0
void main(void)
{
	int c; // òåêóùèé ñèìâîë
	int prev_c; // ïðåäûäóùèé ñèìâîë
	int flag; // äâå áóêâû ïîäðÿä
	int found; // íå ñëîâî
	int cnt; // ñ÷¸ò÷èê
	cnt = 0;
	flag = NO;
	found = NO;
	prev_c = 1; // ïðîñòî ïîòîìó ÷òî 1
	printf("Enter some words:\n");
	while ((c = getchar()) != EOF)
	{
		if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c != ' ' && c != '.' && c != ',' && c != '\n' && c != '\0' && c != '\t')) // ïðîâåðêà íà íå ñëîâî
		{
			found = YES;
		}
		else
		{
			if (c == prev_c && (c != ' ' && c != '.' && c != ',' && c != '\n' && c != '\0' && c != '\t')) // óñëîâèå
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
