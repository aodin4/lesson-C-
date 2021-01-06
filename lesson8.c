#include<stdio.h>

int f_exchange(int);
void f_dollar(int);
void f_euro(int);

int main()
{	
	int rub;
	int f_exchange();
	scanf("Add your value = %d\n", &rub);	
	f_exchange(rub);
}

int f_exchange(rub)
{
  	int dollar;
	int euro;	
	dollar = f_dollar();
	euro = f_euro();
	printf("Dollar = %d\tEuro =%d\n", dollar, euro);
}
void f_euro(rub)
{
	
	return euro = rub * 32 + 12;
}
void f_dollar(rub)
{
return dollar = rub  * 32 + 22;
}
