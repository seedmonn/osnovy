#pragma warning(disable:4996)
#include <stdio.h>
// определение символических констант
#define YES 1
#define NO 0
#define MAXLINE 1000
void process_line(char buffer[]);
int main(void)
{
	char line[MAXLINE];
	gets(line);
	process_line(line);
	puts(line);
	return 0;
}
void process_line(char buffer[])
{
	char c; // текущий символ
	int flag = NO; // признак слова
	int found = NO; // определение слова
	int pos = 0; // позиция текущего символа результирующей строки
	int cnt = NO; // условие наличие повтояющихся букв

	char *j = buffer; // позиция начала слова
	char *in_ptr = buffer; // (i) - позиция текущего символа
	char *out_ptr = buffer; // (pos) - позиция символа выхода
	char *word_ptr = buffer; // (start) - позиция начала слова

	do
	{
		c = *in_ptr; // взять текущий символ из буфера

		if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c != ' ' && c != '.' && c != ',' && c != '\n' && c != '\0' && c != '\t')) // проверка на не слово
		{
			found = YES;
		}

		if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0')
		{
			// найден разделитель
			if (flag == YES)
			{
				// это первый разделить после слова
				// проверить, обнаружен ли в слове
				// искомый признак

				for (j = word_ptr; j < in_ptr - 1; j++)
				{
					int c1 = *j;
					int c2 = *(j + 1);

					if ((c1 - 'A' == c2 - 'A' || c1 - 'a' == c2 - 'a' || c1 - 'a' == c2 - 'A' || c1 - 'A' == c2 - 'a') && (found != YES))
						// проверка на: 1)заглавные буквы и условие задачи. 2) условие является ли слово "словом".
						cnt = YES;


				}
				if (cnt == YES)
				{
					// слово не подлежит удалению
					// оно копируется в результирующую строку
					for (j = word_ptr; j < in_ptr; j++)
						*out_ptr++ = *word_ptr++;

				}


			}
			flag = NO;
			found = NO;
			if (cnt == YES)
				*out_ptr++ = c; //пробелы для "нормальных слов" (по условию задачи)
			else *out_ptr = c;

		}
		else
		{
			if (flag == NO) // найдена буква
				word_ptr = in_ptr; // запомнить позицию начала слова
			flag = YES; //признак слова
			cnt = NO; //сброс условия

		}

		in_ptr++; //переход к следующей ячейке буфера

	} while (c != '\0');
}
