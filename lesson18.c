#include<stdio.h>

int main()
{
	int number;
	printf("Please, add your number ");
	scanf("%d",&number);
	
	if((number >= 0) && (number <= 10)) 
	   printf("Number diapazon 10\n");

	else if((number >= 10) && (number <= 20)) 
	   printf("Number diapazon 20\n");

	else if((number >= 20) && (number <= 30))
	   printf("Number diapazon 30\n");

	else  
           printf("Your value very big");

}
