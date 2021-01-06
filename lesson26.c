#include<stdio.h>
#define SIZE 11
int main()
{
	char str[SIZE];
	fprintf(stdout,"Please, add your name: ");
		fscanf(stdin,"%10s",str);
	printf("%s\n",str);
}

