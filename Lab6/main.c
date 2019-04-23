#include <stdio.h> 
#include <stdlib.h> // чтобы пользоваться функцией rand 
#include <locale.h> // библиотека языков 
#define N 4 
#define K 5 
int main(void) 
{ 
 int x[N][K]; // массив из N на K элементов 
 int i, j; 
 int chet = 0; //счетчик четных 
 int nechet = 0; //счетчик нечетных 
 
 setlocale(LC_ALL, "Rus"); // локализация на русский язык 
 printf("Исходный массив:\n"); 
 // ввод массива 
 for (i = 0; i < N; i++) 
 { 
  for (j = 0; j < K; j++) 
  { 
   x[i][j] = rand() % 10; // число рандомное может быть большим, а нам не нужно большое 
   printf("%4d ", x[i][j]); // выделяем место для одного символа 
  } 
  printf("\n"); 
 } 
 printf("\n"); // для пропуска между исходным и выводящим массивом 
  
 
 for (i = 0; i <N; i++) 
 { 
  for (j = 0; j < K; j++) 
  { 
   if (x[j][i] % 2 == 0) //смотрим столбик 
    chet++; 
   else nechet++; 
  } 
 
  if(chet > nechet) //проверка условия 
 
   for (j = 0; j < K; j++) 
   { 
    x[j][i] = 0; //обуляем столбик 
  
   } 
 
  chet = 0; 
  nechet = 0; 
 } 
 
 // вывод массива 
 printf("Искомый массив:\n"); 
 
 for (i = 0; i < N; i++) 
 { 
  for (j = 0; j < K; j++) 
   printf("%4d ", x[i][j]); 
  printf("\n"); 
 } 
 return 0; 
} // скобка
