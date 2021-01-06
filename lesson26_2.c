#include<stdio.h>
#define SIZE 20


int main()
{
	char str[SIZE];
	fprintf(stdout,"Please, add your name: ");
	fscanf(stdin,"%19s",str);
	printf("Your name: %s\n",str);



}
