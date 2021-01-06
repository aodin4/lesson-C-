#include<stdio.h>
#include<string.h>


int main()
{
	printf("Add number from 1 to 10\n");
	for(int i = 1; i<=10;i++) {
	    printf("%d\n", i);
	}
	printf("\n");

	int number[] = {1,2,3,4,5,6,7,8,9,1,2,4};
	for(int i=0;i<12;i++)
	{
		printf("number[%d] = %d\n",i,number[i]);
	}
	printf("\n");
	char symbols[7] = {'Q','W','E','R','T','Y','\0'};
	for(int j = 0;j< strlen(symbols);j++)
	{
		printf("first value[%d]\t%c\n",j,symbols[j]);
	}
	printf("\n");

	char str[] = {"My string"};
	for(int j=0;j <strlen(str);j++)
	{
		printf("Count = [%d]\tValue=%c\n",j,str[j]);
	}




}
