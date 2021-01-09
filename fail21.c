#include<stdio.h>


typedef struct 
{

	char *name;
	char *popn;

} City;

int main(void)
{
	City ny, la, ch, *ptr;
	ny.name = "New Your";
	ny.popn = "8,274,527";
	printf("\n%s, Population: %s humans\n",ny.name,ny.popn);
	ptr = &la;
	ptr -> name = "Los Angeles";
	ptr -> popn = "5,884,287";
	printf("\n%s, Population: %s humans\n",la.name,la.popn);
	ptr = &ch;
	ptr -> name = "Chicago";
	ptr -> popn = "7,654,744";
	printf("\n%s, population: %s humans\n",ch.name,ch.popn);
}
