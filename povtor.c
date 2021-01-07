#include<stdio.h>

int main()
{
	char symbol;
	symbol = 'd';

	while(symbol == 'd')
	{	
		fprintf(stdout,"Repeat this symbol %c\n",symbol);
		printf("Vvedite value (d/n)");
		scanf("%s",&symbol);
		
	}
	printf("Nadoelo?\n");
	printf("\n");
	int number;
	number = 0;
	while(number <= 10)
	{
	for(int i = 0; i <= 10;i++)
		fprintf(stdout,"Index[%d]\tValue %d\n",i,number++);
	
	}
	printf("BREAK CONTINUE GOTO\n");


	int a = 0;

	for(int i = 0;i<10;i++)
	{
		if(i == 5)
			break;
		fprintf(stdout,"Res %d\t%d\n",a,i);
	}
	int j = 0;
	for(int i = 0; i < 10;i++)
	{
		if(i == 5)
			continue;
		fprintf(stdout,"Res cont %d\t%d\n",j,i);
	}
    printf("\n");


    int g =0;
    for(int i = 0; i < 10;i++)
    {
		if(i == 8)
			goto metka;
			fprintf(stdout,"Goto res %d\t%d\n",i,g);
		
    }
    metka:
    printf("Bye bitch\n");
}
