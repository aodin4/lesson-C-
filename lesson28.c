#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{	
	int number = 15;
	int *p_number;
	p_number = &number;
	printf("Value [%d]\t adress %p\n",*p_number,p_number);
	
	int *p_mass_number;
	int massiv[]={1,2,3,4,5,6,7,8,9,10};
	p_mass_number = massiv;
	for(int i = 0;i < SIZE;i++)
	{
		fprintf(stdout,"Index[%d]\t Value[%d]\tPoints[%p]\n",i,*p_mass_number,p_mass_number);
		p_mass_number++;
	}
	
	char *p_mass_char;
	char string[] = "Andrey";
	p_mass_char = string;
	for(int i = 0; i < strlen(string);i++)
	{	
		if(*p_mass_char =='y')
			*p_mass_char = 'i';
		fprintf(stdout, "Stroka: %c\n",*p_mass_char);
		p_mass_char++;
	}
	printf("\n");


}

