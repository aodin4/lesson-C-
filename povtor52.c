#include<stdio.h>
#include<string.h>
#define SIZE 11

int main()
{
	int massiv[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int *p_massiv;
	p_massiv = massiv;
	for(int i = 0; i < 11;i++)
	{
	fprintf(stdout,"Index[%d]\tValue = %d\tPoints(%p)\n",i,*p_massiv,p_massiv);
	p_massiv++;
	}


	char string[] = {"Andrey"};
	char *p_string;
	p_string = string;
	for(int i = 0;i < strlen(string);i++)
	{
		if(*p_string == 'y')
			*p_string = 'i';
		fprintf(stdout,"Stroka: %c\n",*p_string);
		p_string++;	

	}



}
