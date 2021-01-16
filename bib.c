#include <stdio.h>  // Для printf
#include <string.h> // Для strlen

int main (void)
{    
   // Массив с исходной строкой
   char str [11]="0123456789";

   //Определение длины строки и вывод результата на консоль
   printf ("Длина строки %s - %lu символов\n", str, strlen (str) );

   return 0;
}
