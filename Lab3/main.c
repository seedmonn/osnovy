#pragma warning(disable : 4996) // ���������� ������ c4996
#include <stdio.h>
#define YES 1
#define NO 0
void main(void)
{
	int c; // ������� ������
	int prev_c; // ���������� ������
	int flag; // ��� ����� ������
	int found; // �� �����
	int cnt; // �������
	cnt = 0;
	flag = NO;
	found = NO;
	prev_c = 1; // ������ ������ ��� 1
	printf("Enter some words:\n");
	while ((c = getchar()) != EOF)
	{
		if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c != ' ' && c != '.' && c != ',' && c != '\n' && c != '\0' && c != '\t')) // �������� �� �� �����
		{
			found = YES;
		}
		else
		{
			if (c == prev_c && (c != ' ' && c != '.' && c != ',' && c != '\n' && c != '\0' && c != '\t')) // �������
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
