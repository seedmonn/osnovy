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
int i = 0; // позиция текущего символа исходной cтроки 
int found = NO; // определение слова 
int pos = 0; // позиция текущего символа результирующей строки 
int start = 0; // позиция начала слова 
int cnt = NO; // условие наличие повтояющихся букв 
int j = 0; // позиция начала слова 
// цикл чтения символов из строки 
do 
{ 
c = buffer[i]; // взять текущий символ из буфера 

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

for (j = start; j < i - 1; j++) 
{ 
int c1 = buffer[j]; 
int c2 = buffer[j + 1]; 

if ((c1 - 'A' == c2 - 'A' || c1 - 'a' == c2 - 'a' || c1 - 'a' == c2 - 'A' || c1 - 'A' == c2 - 'a') && (found != YES)) 
// проверка на: 1)заглавные буквы и условие задачи. 2) условие является ли слово "словом". 
cnt = YES; 


} 

if (cnt == YES || (start == i - 1)) 
{ 
// слово не подлежит удалению 
// оно копируется в результирующую строку 
for (j = start; j < i; j++) 
buffer[pos++] = buffer[j]; 

} 


} 
flag = NO; 
found = NO; 
if (cnt == YES || (start == i - 1)) 
buffer[pos++] = c; //пробелы для "нормальных слов" (по условию задачи) 
else buffer[pos] = c; 

} 
else 
{ 
if (flag == NO) // найдена буква 
start = i; // запомнить позицию начала слова 
flag = YES; //признак слова 
cnt = NO; //сброс условия 

} 
i++; //переход к следующей ячейке буфера 

} while (c != '\0'); 
}